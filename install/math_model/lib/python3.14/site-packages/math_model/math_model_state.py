import numpy as np

class KinematicBikeModel:
    def __init__(self, a=1.0, b=1.0, T=0.01, v=0.0, theta=0.0):
        """
        a为质心距后轮距离
        b为质心距前轮距离
        T为采样周期
        L为总长
        状态向量[x,y,v,theta]
        """
        self.a = a
        self.b = b
        self.L = a + b
        self.T = T
        self.state = np.array([0.0, 0.0, v, theta])

    def f_continuous(self, state, u):
        """
        连续时间状态方程
        state: [x, y, v, theta]
        u: [acc, delta]
        """
        x, y, v, theta = state
        acc, delta = u

        beta = np.arctan(self.a * np.tan(delta) / self.L)

        dx = v * np.cos(theta + beta)
        dy = v * np.sin(theta + beta)
        dv = acc
        dtheta = v * np.tan(delta) * np.cos(beta) / self.L

        return np.array([dx, dy, dv, dtheta])
    
    def update_rk4(self, u):
        """
        使用RK4方法更新状态
        u: [acc, delta]
        """
        k1 = self.f_continuous(self.state, u)
        k2 = self.f_continuous(self.state + 0.5 * self.T * k1, u)
        k3 = self.f_continuous(self.state + 0.5 * self.T * k2, u)
        k4 = self.f_continuous(self.state + self.T * k3, u)

        self.state += (self.T / 6.0) * (k1 + 2*k2 + 2*k3 + k4)
        return self.state


'''测试片段'''
def main():
    trajectory_x = []
    trajectory_y = []
    model = KinematicBikeModel(a=1.0, b=1.0, T=0.01)
    u = np.array([1.0, 0.0])  # 加速度为1.0，转角为0.0弧度
    for _ in range(1000):
        state = model.update_rk4(u)
        trajectory_x.append(state[0])
        trajectory_y.append(state[1])
    import matplotlib.pyplot as plt
    plt.plot(trajectory_x, trajectory_y)
    plt.xlabel('X position')
    plt.ylabel('Y position')
    plt.title('Kinematic Bike Model Trajectory')
    plt.axis('equal')
    plt.grid()
    plt.show()
if __name__ == "__main__":
    main()
