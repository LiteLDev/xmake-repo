#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx {

struct Stats {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, long>     cpuTimeFrame;
    ::ll::TypedStorage<8, 8, long>     cpuTimeBegin;
    ::ll::TypedStorage<8, 8, long>     cpuTimeEnd;
    ::ll::TypedStorage<8, 8, long>     cpuTimerFreq;
    ::ll::TypedStorage<8, 8, long>     gpuTimeBegin;
    ::ll::TypedStorage<8, 8, long>     gpuTimeEnd;
    ::ll::TypedStorage<8, 8, long>     gpuTimerFreq;
    ::ll::TypedStorage<8, 8, long>     flipCompletionTime;
    ::ll::TypedStorage<8, 8, long>     cpuFlipRequestTime;
    ::ll::TypedStorage<8, 8, long>     gpuFlipRequestTime;
    ::ll::TypedStorage<8, 8, long>     waitRender;
    ::ll::TypedStorage<8, 8, long>     waitSubmit;
    ::ll::TypedStorage<4, 4, uint>     numDraw;
    ::ll::TypedStorage<4, 4, uint>     numCompute;
    ::ll::TypedStorage<4, 4, uint>     maxGpuLatency;
    ::ll::TypedStorage<4, 4, uint>     gpuFrameNum;
    ::ll::TypedStorage<2, 2, ushort>   numDynamicIndexBuffers;
    ::ll::TypedStorage<2, 2, ushort>   numDynamicVertexBuffers;
    ::ll::TypedStorage<2, 2, ushort>   numFrameBuffers;
    ::ll::TypedStorage<2, 2, ushort>   numIndexBuffers;
    ::ll::TypedStorage<2, 2, ushort>   numOcclusionQueries;
    ::ll::TypedStorage<2, 2, ushort>   numPrograms;
    ::ll::TypedStorage<2, 2, ushort>   numShaders;
    ::ll::TypedStorage<2, 2, ushort>   numTextures;
    ::ll::TypedStorage<2, 2, ushort>   numUniforms;
    ::ll::TypedStorage<2, 2, ushort>   numVertexBuffers;
    ::ll::TypedStorage<2, 2, ushort>   numVertexDecls;
    ::ll::TypedStorage<8, 8, long>     textureMemoryUsed;
    ::ll::TypedStorage<8, 8, long>     rtMemoryUsed;
    ::ll::TypedStorage<4, 4, int>      transientVbUsed;
    ::ll::TypedStorage<4, 4, int>      transientIbUsed;
    ::ll::TypedStorage<4, 20, uint[5]> numPrims;
    ::ll::TypedStorage<8, 8, ulong>    gpuMemoryMax;
    ::ll::TypedStorage<8, 8, ulong>    gpuMemoryUsed;
    ::ll::TypedStorage<2, 2, ushort>   width;
    ::ll::TypedStorage<2, 2, ushort>   height;
    ::ll::TypedStorage<2, 2, ushort>   textWidth;
    ::ll::TypedStorage<2, 2, ushort>   textHeight;
    // NOLINTEND
};

} // namespace bgfx
