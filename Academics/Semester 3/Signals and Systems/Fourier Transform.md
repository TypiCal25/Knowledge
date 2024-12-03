The Fourier Transform is a mathematical method to convert a function from the amplitude vs time domain to the amplitude vs frequency domain for **non-periodic functions**.

$$\Huge F[f(t)] = \int_{-\infty}^{\infty} f(t) e^{-jwt} dt$$
$$\Huge f(t) = F^{-1}[f(w)] = \dfrac{1}{2\pi} \int_{-\infty}^{\infty} f(w)e^{jwt} dt$$
# Convergence of a Fourier Transform
Fourier Transforms aren't always defined for a function. They are convergent to the original function when
1. $\Large \int_{-\infty}^{\infty}\left | x \right | dt \lt \infty$, i.e, it is a stable signal
2. Periodic signals which are neither absolutely integrable or square integrable over an infinite interval can be considered to have a Fourier Transform if the delta function is permitted in the answer
3. x(t) has a finite number of discontinuities and a finite number of minima and maxima within any finite time interval.

If a function satisfies any of these three properties, then it has a Fourier Transform.

