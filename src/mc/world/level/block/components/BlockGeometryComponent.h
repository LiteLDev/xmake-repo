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
#if defined(LL_PLAT_A) // @header-generator platform
class ExpressionNode;
#else // @header-generator platform
#endif // @header-generator platform
struct BlockGeometryDescription;
namespace ClientBlockPipeline { struct BlockSchematic; }
// clang-format on

struct BlockGeometryComponent {
public:
    // BlockGeometryComponent inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    struct DefaultRenderer;
#else // @header-generator platform
#endif // @header-generator platform
    struct DefaultPlusEmbeddedRenderer;
    struct DefaultPlusExtraBlockRenderer;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct DefaultRenderer;
#endif // @header-generator platform
    // clang-format on

    // BlockGeometryComponent inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct DefaultRenderer {};

#else // @header-generator platform
#endif // @header-generator platform
    struct DefaultPlusEmbeddedRenderer {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 64, ::Matrix> mTransformationMatrix;
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        DefaultPlusEmbeddedRenderer& operator=(DefaultPlusEmbeddedRenderer const&);
        DefaultPlusEmbeddedRenderer(DefaultPlusEmbeddedRenderer const&);
        DefaultPlusEmbeddedRenderer();
#else // @header-generator platform
#endif // @header-generator platform
    };

    struct DefaultPlusExtraBlockRenderer {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 64, ::Matrix> mTransformationMatrix;
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        DefaultPlusExtraBlockRenderer& operator=(DefaultPlusExtraBlockRenderer const&);
        DefaultPlusExtraBlockRenderer(DefaultPlusExtraBlockRenderer const&);
        DefaultPlusExtraBlockRenderer();
#else // @header-generator platform
#endif // @header-generator platform
    };

#if defined(LL_PLAT_A) // @header-generator platform
    using Renderer = std::variant<
        BlockGeometryComponent::DefaultRenderer,
        BlockGeometryComponent::DefaultPlusEmbeddedRenderer,
        BlockGeometryComponent::DefaultPlusExtraBlockRenderer>;
#else // @header-generator platform
    struct DefaultRenderer {};

    using Renderer = ::std::variant<
        ::BlockGeometryComponent::DefaultRenderer,
        ::BlockGeometryComponent::DefaultPlusEmbeddedRenderer,
        ::BlockGeometryComponent::DefaultPlusExtraBlockRenderer>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 48, ::HashedString>                                           mGeometryName;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ClientBlockPipeline::BlockSchematic>> mBlockSchematic;
    ::ll::TypedStorage<1, 1, bool>                                                      mNeedsLegacyTopRotation;
    ::ll::TypedStorage<1, 1, bool>                                                      mUseBlockTypeLightAbsorption;
    ::ll::TypedStorage<1, 1, bool>                                                      mIsFullBlock;
    ::ll::TypedStorage<1, 1, bool>                                                      mIgnoreGeometryForIsSolid;
    ::ll::TypedStorage<1, 1, bool>                                                      mIsFullBlockV1;
    ::ll::TypedStorage<8, 48, ::HashedString>                                           mCullingLayer;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::BlockGeometryDescription::SharedInitializationData>>
                                                                                mSharedInitializationData;
    ::ll::TypedStorage<8, 24, ::std::variant<bool, ::std::set<::HashedString>>> mUVsLocked;
    ::ll::TypedStorage<
        4,
        68,
        ::std::variant<
            ::BlockGeometryComponent::DefaultRenderer,
            ::BlockGeometryComponent::DefaultPlusEmbeddedRenderer,
            ::BlockGeometryComponent::DefaultPlusExtraBlockRenderer>>
                                                  mRenderer;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 8, ::BlockState const*> mNWayVisualRotationStateX;
    ::ll::TypedStorage<8, 8, ::BlockState const*> mNWayVisualRotationStateY;
    ::ll::TypedStorage<8, 8, ::BlockState const*> mNWayVisualRotationStateZ;
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format on
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    BlockGeometryComponent();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    BlockGeometryComponent(BlockGeometryComponent const&);

#endif
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI BlockGeometryComponent();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI BlockGeometryComponent();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI BlockGeometryComponent(::BlockGeometryDescription const&, ::BlockType const*);
#else // @header-generator platform
    MCAPI
    BlockGeometryComponent(::BlockGeometryDescription const& blockGeometryDescription, ::BlockType const* blockType);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::map<std::string, ExpressionNode> const& getBoneVisibilities() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::BlockGeometryComponent& operator=(::BlockGeometryComponent const&);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI ~BlockGeometryComponent();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void* $ctor();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::BlockGeometryDescription const&, ::BlockType const*);
#else // @header-generator platform
    MCAPI void* $ctor(::BlockGeometryDescription const& blockGeometryDescription, ::BlockType const* blockType);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
