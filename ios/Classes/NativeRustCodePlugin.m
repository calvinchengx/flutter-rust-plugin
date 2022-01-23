#import "NativeRustCodePlugin.h"
#if __has_include(<native_rust_code/native_rust_code-Swift.h>)
#import <native_rust_code/native_rust_code-Swift.h>
#else
// Support project import fallback if the generated compatibility header
// is not copied when this plugin is created as a library.
// https://forums.swift.org/t/swift-static-libraries-dont-copy-generated-objective-c-header/19816
#import "native_rust_code-Swift.h"
#endif

@implementation NativeRustCodePlugin
+ (void)registerWithRegistrar:(NSObject<FlutterPluginRegistrar>*)registrar {
  [SwiftNativeRustCodePlugin registerWithRegistrar:registrar];
}
@end
