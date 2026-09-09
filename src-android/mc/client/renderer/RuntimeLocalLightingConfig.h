#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/platform/brstd/flat_map.h"
#include "mc/world/level/block/NewBlockID.h"

// auto generated forward declare list
// clang-format off
class BlockType;
// clang-format on

class RuntimeLocalLightingConfig : public ::Bedrock::EnableNonOwnerReferences {
public:
    // RuntimeLocalLightingConfig inner types declare
    // clang-format off
    struct BlockLightingData;
    // clang-format on

    // RuntimeLocalLightingConfig inner types define
    enum class LightSourceType : uchar {
        StaticLight = 0,
        PointLight  = 1,
    };

    struct BlockLightingData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 16, std::optional<glm::vec<3, float, (glm::qualifier)0>>> mColor;
        ::ll::TypedStorage<1, 1, ::RuntimeLocalLightingConfig::LightSourceType>         mType;
        // NOLINTEND

    public:
        // prevent constructor by default
        BlockLightingData();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mBlockLightingCollection;
    // NOLINTEND

public:
    // prevent constructor by default
    RuntimeLocalLightingConfig& operator=(RuntimeLocalLightingConfig const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RuntimeLocalLightingConfig();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void append(::NewBlockID const&, ::RuntimeLocalLightingConfig::BlockLightingData const&);

    MCNAPI void clear();

    MCNAPI std::optional<glm::vec<3, float, (glm::qualifier)0>> getPointLightColor(::BlockType const&) const;

    MCNAPI bool isPointLightSource(::BlockType const&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
