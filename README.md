# native_rust_code

Because `libclient_lib.a` is a large binary, we cannot just commit into git and push to github. Build `libclient_lib.a` using the TSS repo.

Then copy `libclient_lib.a` into the `ios` directory.

`libclient.h` is also the output artifact from the TSS repo.

We need both artifacts.

For expediency, we are also manually copying everything in `libclient.h` into `rust/target/bindings.h`. This build process between two repos can be automated later on.

Meanwhile, as a simple prototype, this should work.

Finally, run ffigen using the command below:
```bash
flutter pub run ffigen
```