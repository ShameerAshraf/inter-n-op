use std::env;

fn main() {
    // Statements here are executed when the compiled binary is called.

    let args: Vec<_> = env::args().collect();

    // Print text to the console.
    let num = args[1].clone();
    let str = format!("Hello {num}");
    println!("{str}");
}
