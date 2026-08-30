#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class BaseLightTextureImageBuilder;
class ChunkSource;
class Dimension;
class IClientDimensionExtensions;
class Player;
class WireframeQueue;
struct DimensionType;
// clang-format on

class ClientDimensionExtensions {
public:
    // ClientDimensionExtensions inner types declare
    // clang-format off
    struct Dependencies;
    // clang-format on

    // ClientDimensionExtensions inner types define
    struct Dependencies {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 64> mCreateChunkSource;
        // NOLINTEND
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClientDimensionExtensions() = default;

    virtual ::BaseLightTextureImageBuilder* getLightTextureImageBuilder() const = 0;

    virtual std::shared_ptr<WireframeQueue> getWireframeQueue() const = 0;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::unique_ptr<IClientDimensionExtensions> create(::ClientDimensionExtensions::Dependencies&&);

    MCNAPI static std::shared_ptr<WireframeQueue> tryGetWireframeQueue(::Player const*);
    // NOLINTEND
};
