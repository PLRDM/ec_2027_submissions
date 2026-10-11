# RobotControl 模块说明书 (README)





### 1. 声明
- **枚举 `Action`**：定义了机器人可执行的动作，包括 `Forward` (前进)、`Left` (左转)、`Right` (右转)、`Backward` (后退)。
- **定义一个类**：`ROBOT`
  - **定义私有数据**：`left`, `front`, `right` 存储传感器距离。
  - **状态标志**：`canForward` 判断前方是否安全（条件 `front > 30`）；`isNarrow` 判断是否进入狭窄区域（条件 `left < 15` 或 `right < 15`）。
  - **当前动作**：`action` 保存了决策后的动作指令。

### 2.决策逻辑 
决策函数 `decide()` 采用了三级的 `if-else` 嵌套结构：
1. **第一级**：判断 `canForward`。若安全（`front > 30`），首选动作设为 `Forward`。
2. **第二级**：若无法前进，则比较左右距离。`left > right` 时向左转；`right > left` 时向右转；若两侧距离相等则后退。
3. **第三级**：判断 `isNarrow`。如果进入狭窄区域，**强制覆盖**当前动作并设为 `Backward`，以防止机器人在狭窄处卡死。

###  动作执行
执行函数 `update()` 通过 `switch-case` 语句，将决策得到的 `action` 状态转化为具体的电机控制调用（如 `forward()`、`turnleft()` 等）。

## 3. 实例化
在 `main` 函数中，采用了循环 `while(true)` 模式：
1. **实例化**：`Robot robot(10, 10, 10);` （传入初始距离模拟数据）。
2. **获取数据**：`robot.getData();` （预留接口，用于读取实时传感器数据）。
3. **执行逻辑**：`robot.update();` （根据当前状态执行动作，该函数内部会根据实际状态调用决策逻辑）。

