
import 'dart:async';

import 'package:flutter/services.dart';

class NativeRustCode {
  static const MethodChannel _channel = MethodChannel('native_rust_code');

  static Future<String?> get platformVersion async {
    final String? version = await _channel.invokeMethod('getPlatformVersion');
    return version;
  }
}
