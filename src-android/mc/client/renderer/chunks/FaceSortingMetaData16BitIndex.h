#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/chunks/FaceSortingMetaDataBase.h"
#include "mc/client/renderer/chunks/FaceSortingMetaDataType.h"

// auto generated forward declare list
// clang-format off
struct FaceSortingQuadInfo;
struct RenderChunkQuadInfo;
// clang-format on

class FaceSortingMetaData16BitIndex : public ::FaceSortingMetaDataBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<ushort>> mFaceVertexIndex16BitList;
    // NOLINTEND

public:
    // prevent constructor by default
    FaceSortingMetaData16BitIndex();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FaceSortingMetaData16BitIndex();

    virtual ::FaceSortingMetaDataType getType() const;

    virtual ulong getFaceCount() const;

    virtual ::FaceSortingQuadInfo getRenderChunkQuadInfo(ulong) const;

    virtual ulong getDataSize() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit FaceSortingMetaData16BitIndex(std::vector<RenderChunkQuadInfo> const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::vector<RenderChunkQuadInfo> const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::FaceSortingMetaDataType $getType() const;

    MCNAPI ulong $getFaceCount() const;

    MCNAPI ::FaceSortingQuadInfo $getRenderChunkQuadInfo(ulong) const;

    MCNAPI ulong $getDataSize() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
