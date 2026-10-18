#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/chunks/FaceSortingMetaDataType.h"

// auto generated forward declare list
// clang-format off
struct FaceSortingQuadInfo;
struct RenderChunkQuadInfo;
// clang-format on

class FaceSortingMetaDataBase {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FaceSortingMetaDataBase() = default;

    virtual ::FaceSortingMetaDataType getType() const;

    virtual ulong getFaceCount() const = 0;

    virtual ::FaceSortingQuadInfo getRenderChunkQuadInfo(ulong) const = 0;

    virtual ulong getDataSize() const = 0;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::shared_ptr<FaceSortingMetaDataBase>
    createFaceSortingMetaData(std::vector<RenderChunkQuadInfo> const&, bool);
    // NOLINTEND
};
#else // @header-generator platform
class FaceSortingMetaDataBase {};
#endif // @header-generator platform
