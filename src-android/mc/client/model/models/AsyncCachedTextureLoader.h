#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/ResourceLocation.h"
#include "mc/deps/core/threading/TaskGroup.h"

// auto generated forward declare list
// clang-format off
class Scheduler;
class WorkerPool;
namespace cg { class ImageBuffer; }
namespace mce { class TextureGroup; }
// clang-format on

class AsyncCachedTextureLoader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 240, ::TaskGroup>               mTaskGroup;
    ::ll::TypedStorage<8, 24, std::set<ResourceLocation>> mQueuedImages;
    // NOLINTEND

public:
    // prevent constructor by default
    AsyncCachedTextureLoader();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AsyncCachedTextureLoader(::WorkerPool&, ::Scheduler&, std::string const&);

    MCNAPI ::cg::ImageBuffer* getCachedImageOrLoadAsync(::ResourceLocation const&, ::mce::TextureGroup&);

    MCNAPI ~AsyncCachedTextureLoader();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::WorkerPool&, ::Scheduler&, std::string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
