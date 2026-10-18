#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/chunks/CentroidPlusReverseBit.h"
#include "mc/client/renderer/chunks/FaceSortingMetaDataBase.h"
#include "mc/client/renderer/chunks/FaceSortingMetaDataType.h"

// auto generated forward declare list
// clang-format off
struct FaceSortingQuadInfo;
struct RenderChunkQuadInfo;
// clang-format on

class FaceSortingMetaData32BitIndexWithCentroid : public ::FaceSortingMetaDataBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<uint>>                   mFaceVertexIndex32BitList;
    ::ll::TypedStorage<8, 24, std::vector<CentroidPlusReverseBit>> mCentroidPlusReverseBitList;
    // NOLINTEND

public:
    // prevent constructor by default
    FaceSortingMetaData32BitIndexWithCentroid();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FaceSortingMetaData32BitIndexWithCentroid();

    virtual ::FaceSortingMetaDataType getType() const;

    virtual ulong getFaceCount() const;

    virtual ::FaceSortingQuadInfo getRenderChunkQuadInfo(ulong) const;

    virtual ulong getDataSize() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit FaceSortingMetaData32BitIndexWithCentroid(std::vector<RenderChunkQuadInfo> const&);
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
#else // @header-generator platform
class FaceSortingMetaData32BitIndexWithCentroid {};
#endif // @header-generator platform
