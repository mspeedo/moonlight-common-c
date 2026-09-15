#pragma once

#ifdef __cplusplus
extern "C" {
#endif

typedef void (*VIDEO_RECEIVE_THREAD_INIT_CALLBACK)(void);

// Optional client hook invoked once on the video receive thread before it
// begins receiving packets. This lets platform clients apply best-effort
// per-thread scheduling policy without adding client dependencies here.
void LiSetVideoReceiveThreadInitCallback(VIDEO_RECEIVE_THREAD_INIT_CALLBACK callback);

#ifdef __cplusplus
}
#endif
