use std::f64::consts::PI;
use std::io::{self, Write};

/// еталонна функція
fn y(x: f64) -> f64 {
    (PI * x) / 4.0
}

/// обчислення k-го члена ряду
fn term(x: f64, k: i32) -> f64 {
    let m = (2 * k + 1) as f64;
    let denom = m * m;
    let mut ak = (m * x).sin() / denom;
    if k % 2 != 0 {
        ak = -ak;
    }
    ak
}

fn sum1(x: f64, n: i32) -> f64 {
    let mut z: f64 = 0.0;
    for k in 0..=n {
        z += term(x, k);
    }
    z
}

/// ітераційне обчислення суми ряду із заданою точністю eps (|ak| > eps)
fn sum2(x: f64, eps: f64) -> f64 {
    let mut z: f64 = 0.0;
    let mut ak: f64 = 1.0;
    let mut k: i32 = 0;
    while ak.abs() > eps {
        ak = term(x, k);
        z += ak;
        k += 1;
    }
    z
}

fn main() {
    let delta: f64 = 0.0001;
    let x1: f64 = 0.0;
    let x2: f64 = PI / 2.0;
    let step: f64 = (x2 - x1) / (10.0 - 1.0);
    let n = 10;
    println!();
    println!("{:>10}{:>12}{:>12}{:>12}", "x", "Sn", "Se", "y");
    println!("----------------------------------------------");

    for j in 1..=10 {
        let x = x1 + (j - 1) as f64 * step;

        let sn = sum1(x, n);
        let se = sum2(x, delta);
        let y_val = y(x);

        println!(
            "{:>10.5}{:>12.5}{:>12.5}{:>12.5}",
            x, sn, se, y_val
        );
    }
}
