#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Matrix.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/level/block/components/BlockGeometryDescription.h"

// auto generated forward declare list
// clang-format off
class BlockState;
class BlockType;
class ExpressionNode;
struct BlockGeometryDescription;
namespace ClientBlockPipeline { struct BlockSchematic; }
// clang-format on

struct BlockGeometryComponent {
public:
    // BlockGeometryComponent inner types declare
    // clang-format off
    struct DefaultRenderer;
    struct DefaultPlusEmbeddedRenderer;
    struct DefaultPlusExtraBlockRenderer;
    // clang-format on

    // BlockGeometryComponent inner types define
    struct DefaultRenderer {};

    struct DefaultPlusEmbeddedRenderer {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 64, ::Matrix> mTransformationMatrix;
        // NOLINTEND

    public:
        // prevent constructor by default
        DefaultPlusEmbeddedRenderer& operator=(DefaultPlusEmbeddedRenderer const&);
        DefaultPlusEmbeddedRenderer(DefaultPlusEmbeddedRenderer const&);
        DefaultPlusEmbeddedRenderer();
    };

    struct DefaultPlusExtraBlockRenderer {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 64, ::Matrix> mTransformationMatrix;
        // NOLINTEND

    public:
        // prevent constructor by default
        DefaultPlusExtraBlockRenderer& operator=(DefaultPlusExtraBlockRenderer const&);
        DefaultPlusExtraBlockRenderer(DefaultPlusExtraBlockRenderer const&);
        DefaultPlusExtraBlockRenderer();
    };

    using Renderer = std::variant<
        BlockGeometryComponent::DefaultRenderer,
        BlockGeometryComponent::DefaultPlusEmbeddedRenderer,
        BlockGeometryComponent::DefaultPlusExtraBlockRenderer>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 40, ::HashedString> mGeometryName;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ClientBlockPipeline::BlockSchematic>> mBlockSchematic;
    ::ll::TypedStorage<1, 1, bool> mNeedsLegacyTopRotation;
    ::ll::TypedStorage<1, 1, bool> mUseBlockTypeLightAbsorption;
    ::ll::TypedStorage<1, 1, bool> mIsFullBlock;
    ::ll::TypedStorage<1, 1, bool> mIgnoreGeometryForIsSolid;
    ::ll::TypedStorage<1, 1, bool> mIsFullBlockV1;
    ::ll::TypedStorage<8, 40, ::HashedString> mCullingLayer;
    ::ll::UntypedStorage<8, 16> mSharedInitializationData;
    ::ll::TypedStorage<8, 32, std::variant<bool, std::set<HashedString>>> mUVsLocked;
    ::ll::TypedStorage<4, 68, std::variant<BlockGeometryComponent::DefaultRenderer, BlockGeometryComponent::DefaultPlusEmbeddedRenderer, BlockGeometryComponent::DefaultPlusExtraBlockRenderer>> mRenderer;
    ::ll::TypedStorage<8, 8, ::BlockState const*> mNWayVisualRotationStateX;
    ::ll::TypedStorage<8, 8, ::BlockState const*> mNWayVisualRotationStateY;
    ::ll::TypedStorage<8, 8, ::BlockState const*> mNWayVisualRotationStateZ;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BlockGeometryComponent();

    MCNAPI BlockGeometryComponent(::BlockGeometryDescription const&, ::BlockType const*);

    MCNAPI std::map<std::string, ExpressionNode> const& getBoneVisibilities() const;

    MCNAPI ::HashedString const& getCullingLayer() const;

    MCNAPI ::HashedString const& getCullingName() const;

    MCNAPI ::BlockState const* getNWayVisualRotationStateX() const;

    MCNAPI ::BlockState const* getNWayVisualRotationStateY() const;

    MCNAPI ::BlockState const* getNWayVisualRotationStateZ() const;

    MCNAPI bool hasLockedUVs() const;

    MCNAPI bool hasNWayVisualRotation() const;

    MCNAPI bool ignoreGeometryForIsSolid() const;

    MCNAPI bool isFullBlock() const;

    MCNAPI bool isFullBlockV1() const;

    MCNAPI ~BlockGeometryComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::BlockGeometryDescription const&, ::BlockType const*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
