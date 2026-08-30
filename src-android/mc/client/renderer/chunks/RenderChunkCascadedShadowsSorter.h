#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/chunks/RenderChunkSorter.h"
#include "mc/deps/core/utility/buffer_span.h"

// auto generated forward declare list
// clang-format off
class FaceSortingMetaDataBase;
class RenderChunkSorterSharedInfo;
class SubChunkPos;
// clang-format on

class RenderChunkCascadedShadowsSorter : public ::RenderChunkSorter {
public:
    // prevent constructor by default
    RenderChunkCascadedShadowsSorter& operator=(RenderChunkCascadedShadowsSorter const&);
    RenderChunkCascadedShadowsSorter();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RenderChunkCascadedShadowsSorter();

    virtual void sortAndCullFaces(::SubChunkPos const&, ::buffer_span<std::shared_ptr<FaceSortingMetaDataBase>>);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RenderChunkCascadedShadowsSorter(std::shared_ptr<RenderChunkSorterSharedInfo>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<RenderChunkSorterSharedInfo>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $sortAndCullFaces(::SubChunkPos const&, ::buffer_span<std::shared_ptr<FaceSortingMetaDataBase>>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
