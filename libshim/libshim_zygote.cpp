#include <stdlib.h>
// Keep inline with core/jni/fd_utils.cpp
// Static whitelist of open paths that the zygote is allowed to keep open.
static const char* kPathWhitelist[] = {
  "/dev/null",
  "/dev/socket/zygote",
  "/dev/socket/zygote_secondary",
  "/dev/socket/webview_zygote",
  "/sys/kernel/debug/tracing/trace_marker",
  "/system/framework/framework-res.apk",
  "/dev/urandom",
  "/dev/ion",
  "/proc/ged",
  "/dev/dri/renderD129", // Fixes b/31172436
};