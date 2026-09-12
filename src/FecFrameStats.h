#pragma once

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct _FEC_FRAME_STATS {
    uint32_t recoveredFrames;
    uint32_t failedFrames;
} FEC_FRAME_STATS, *PFEC_FRAME_STATS;

// Returns stream-lifetime FEC frame effectiveness counters. A recovered frame
// required FEC reconstruction and was ultimately delivered successfully. A
// failed frame had FEC enabled but was abandoned as unrecoverable. Completely
// missing frames that never reach the RTP queue are not FEC failures.
const FEC_FRAME_STATS* LiGetFecFrameStats(void);

#ifdef __cplusplus
}
#endif
