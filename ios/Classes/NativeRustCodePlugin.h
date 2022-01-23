#import <Flutter/Flutter.h>

@interface NativeRustCodePlugin : NSObject<FlutterPlugin>
@end

char *rust_greeting(const char *to);

void rust_cstr_free(char *s);
