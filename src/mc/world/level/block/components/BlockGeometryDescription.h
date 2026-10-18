#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/v1_26_20/block/GeometryComponent.h"
#include "mc/util/molang/ExpressionNode.h"
#else // @header-generator platform
#include "mc/deps/shared_types/v1_26_20/block/components/GeometryComponent.h"
#endif // @header-generator platform
#include "mc/world/level/block/components/BlockComponentDescription.h"
#include "mc/world/level/block/components/BlockRendererDescription.h"
#include "mc/world/level/block/components/NetworkedBlockComponentDescription.h"

// auto generated forward declare list
// clang-format off
class BlockComponentStorage;
#if defined(LL_PLAT_A) // @header-generator platform
class CerealSchemaUpgradeSet;
#else // @header-generator platform
#endif // @header-generator platform
class CompoundTag;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class ExpressionNode;
#endif // @header-generator platform
class SemVersion;
namespace SharedTypes::Legacy { struct ExpressionNode; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
struct BlockGeometryDescription : public ::NetworkedBlockComponentDescription<BlockGeometryDescription> {
#else // @header-generator platform
struct BlockGeometryDescription : public ::NetworkedBlockComponentDescription<::BlockGeometryDescription> {
#endif // @header-generator platform
public:
    // BlockGeometryDescription inner types declare
    // clang-format off
    struct SharedInitializationData;
    // clang-format on

    // BlockGeometryDescription inner types define
    struct SharedInitializationData {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 40, ::HashedString>                        mCullingName;
        ::ll::TypedStorage<8, 24, std::map<std::string, ExpressionNode>> mBoneVisibilities;
#else // @header-generator platform
        ::ll::TypedStorage<8, 48, ::HashedString>                              mCullingName;
        ::ll::TypedStorage<8, 16, ::std::map<::std::string, ::ExpressionNode>> mBoneVisibilities;
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 40, ::HashedString> mGeometryName;
    ::ll::TypedStorage<1, 1, bool> mNeedsLegacyTopRotation;
    ::ll::TypedStorage<1, 1, bool> mUseBlockTypeLightAbsorption;
    ::ll::TypedStorage<1, 1, bool> mIgnoreGeometryForIsSolid;
    ::ll::TypedStorage<1, 1, bool> mIsFullBlockV1;
    ::ll::TypedStorage<8, 40, ::HashedString> mCullingLayer;
    ::ll::TypedStorage<8, 40, ::HashedString> mCullingShapeName;
    ::ll::TypedStorage<8, 16, std::shared_ptr<BlockGeometryDescription::SharedInitializationData>> mSharedInitializationData;
    ::ll::TypedStorage<8, 32, std::variant<bool, std::set<HashedString>>> mUVsLocked;
    ::ll::TypedStorage<4, 52, ::BlockRendererDescription> mRenderer;
    ::ll::UntypedStorage<8, 16> mNWayVisualRotation;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 48, ::HashedString> mGeometryName;
    ::ll::TypedStorage<1, 1, bool>            mNeedsLegacyTopRotation;
    ::ll::TypedStorage<1, 1, bool>            mUseBlockTypeLightAbsorption;
    ::ll::TypedStorage<1, 1, bool>            mIgnoreGeometryForIsSolid;
    ::ll::TypedStorage<1, 1, bool>            mIsFullBlockV1;
    ::ll::TypedStorage<8, 48, ::HashedString> mCullingLayer;
    ::ll::TypedStorage<8, 48, ::HashedString> mCullingShapeName;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::BlockGeometryDescription::SharedInitializationData>>
                                                                                mSharedInitializationData;
    ::ll::TypedStorage<8, 24, ::std::variant<bool, ::std::set<::HashedString>>> mUVsLocked;
    ::ll::TypedStorage<4, 52, ::BlockRendererDescription>                       mRenderer;
    ::ll::TypedStorage<
        8,
        16,
        ::std::shared_ptr<::SharedTypes::v1_26_20::BlockDefinition::GeometryComponent::NWayVisualRotationStateMapping>>
        mNWayVisualRotation;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~BlockGeometryDescription();
#else // @header-generator platform
    virtual ::std::string const& getName() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string const& getName() const;
#else // @header-generator platform
    virtual void initializeComponent(::BlockComponentStorage& blockComponentStorage) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void initializeComponent(::BlockComponentStorage&) const;
#else // @header-generator platform
    virtual void initializeComponent(::BlockComponentDescription::InitializationContext& context) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void initializeComponent(::BlockComponentDescription::InitializationContext&) const;
#else // @header-generator platform
    virtual void initializeComponentFromCode(::BlockComponentStorage& blockComponentStorage) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void initializeComponentFromCode(::BlockComponentStorage&) const;
#else // @header-generator platform
    virtual void initializeComponentFromCode(::BlockComponentDescription::InitializationContext& context) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void initializeComponentFromCode(::BlockComponentDescription::InitializationContext&) const;
#else // @header-generator platform
    virtual void handleVersionBasedInitialization(::SemVersion const& originalJsonVersion) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handleVersionBasedInitialization(::SemVersion const&);
#else // @header-generator platform
    virtual ::CompoundTag buildUnboundDataNetworkTag() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::CompoundTag buildUnboundDataNetworkTag() const;
#else // @header-generator platform
    virtual void initializeUnboundDataFromNetwork(::CompoundTag const& tag) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void initializeUnboundDataFromNetwork(::CompoundTag const&);
#else // @header-generator platform
    virtual ~BlockGeometryDescription() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI BlockGeometryDescription(::BlockGeometryDescription const&);
#else // @header-generator platform
    MCAPI BlockGeometryDescription();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI BlockGeometryDescription(
        ::HashedString const&,
        ::HashedString const&,
        ::HashedString const&,
        ::HashedString const&,
        std::variant<bool, std::set<HashedString>> const&,
        ::BlockRendererDescription const&,
        bool
#else // @header-generator platform
    MCAPI BlockGeometryDescription(::BlockGeometryDescription const&);

    MCAPI BlockGeometryDescription(
        ::HashedString const&                                   geometryName,
        ::HashedString const&                                   cullingName,
        ::HashedString const&                                   cullingShapeName,
        ::HashedString const&                                   cullingLayer,
        ::std::variant<bool, ::std::set<::HashedString>> const& uvLock,
        ::BlockRendererDescription const&                       renderer,
        bool                                                    isFullBlockV1
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockGeometryDescription& operator=(::BlockGeometryDescription const&);
#else // @header-generator platform
    MCAPI ::BlockGeometryDescription& operator=(::BlockGeometryDescription&&);

    MCAPI ::BlockGeometryDescription& operator=(::BlockGeometryDescription const&);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::map<std::string, SharedTypes::Legacy::ExpressionNode>
    getBoneVisibility(std::map<std::string, ExpressionNode> const&);
#else // @header-generator platform
    MCAPI static ::std::map<::std::string, ::SharedTypes::Legacy::ExpressionNode>
    getBoneVisibility(::std::map<::std::string, ::ExpressionNode> const& boneVisibilities);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void registerVersionUpgrades(::CerealSchemaUpgradeSet&);

    MCNAPI static std::map<std::string, ExpressionNode>
    setBoneVisibility(std::map<std::string, SharedTypes::Legacy::ExpressionNode> const&);
#else // @header-generator platform
    MCAPI static ::std::map<::std::string, ::ExpressionNode>
    setBoneVisibility(::std::map<::std::string, ::SharedTypes::Legacy::ExpressionNode> const& boneVisibilities);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::HashedString const& CROSS_GEO_NAME();
#else // @header-generator platform
    MCAPI static ::HashedString const& CROSS_GEO_NAME();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& CULLING_LAYER_DOCUMENTATION();
#else // @header-generator platform
    MCAPI static ::std::string const& CULLING_LAYER_DOCUMENTATION();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::HashedString const& CULLING_LAYER_LEAVES();
#else // @header-generator platform
    MCAPI static ::HashedString const& CULLING_LAYER_LEAVES();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& CULLING_LAYER_NAME_CONSTRAINT();
#else // @header-generator platform
    MCAPI static ::std::string const& CULLING_LAYER_NAME_CONSTRAINT();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::HashedString const& CULLING_LAYER_UNDEFINED();
#else // @header-generator platform
    MCAPI static ::HashedString const& CULLING_LAYER_UNDEFINED();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::HashedString const& CULLING_SHAPE_DEFAULT();
#else // @header-generator platform
    MCAPI static ::HashedString const& CULLING_SHAPE_DEFAULT();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& CULLING_SHAPE_DOCUMENTATION();
#else // @header-generator platform
    MCAPI static ::std::string const& CULLING_SHAPE_DOCUMENTATION();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& CULLING_SHAPE_NAME_CONSTRAINT();
#else // @header-generator platform
    MCAPI static ::std::string const& CULLING_SHAPE_NAME_CONSTRAINT();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::HashedString const& FULL_BLOCK_GEO_NAME();
#else // @header-generator platform
    MCAPI static ::HashedString const& FULL_BLOCK_GEO_NAME();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::HashedString const& FULL_BLOCK_GEO_NAME_V1();
#else // @header-generator platform
    MCAPI static ::HashedString const& FULL_BLOCK_GEO_NAME_V1();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& GEO_NAME_CONSTRAINT();
#else // @header-generator platform
    MCAPI static ::std::string const& GEO_NAME_CONSTRAINT();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& NameID();
#else // @header-generator platform
    MCAPI static ::std::string const& NameID();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& UV_LOCKING_CONSTRAINT();
#else // @header-generator platform
    MCAPI static ::std::string const& UV_LOCKING_CONSTRAINT();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::BlockGeometryDescription const&);
#else // @header-generator platform
    MCAPI void* $ctor();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        ::HashedString const&,
        ::HashedString const&,
        ::HashedString const&,
        ::HashedString const&,
        std::variant<bool, std::set<HashedString>> const&,
        ::BlockRendererDescription const&,
        bool
#else // @header-generator platform
    MCAPI void* $ctor(::BlockGeometryDescription const&);

    MCAPI void* $ctor(
        ::HashedString const&                                   geometryName,
        ::HashedString const&                                   cullingName,
        ::HashedString const&                                   cullingShapeName,
        ::HashedString const&                                   cullingLayer,
        ::std::variant<bool, ::std::set<::HashedString>> const& uvLock,
        ::BlockRendererDescription const&                       renderer,
        bool                                                    isFullBlockV1
#endif // @header-generator platform
    );
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

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const& $getName() const;
#else // @header-generator platform
    MCAPI ::std::string const& $getName() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $initializeComponent(::BlockComponentStorage&) const;
#else // @header-generator platform
    MCAPI void $initializeComponent(::BlockComponentStorage& blockComponentStorage) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $initializeComponent(::BlockComponentDescription::InitializationContext&) const;
#else // @header-generator platform
    MCAPI void $initializeComponent(::BlockComponentDescription::InitializationContext& context) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $initializeComponentFromCode(::BlockComponentStorage&) const;
#else // @header-generator platform
    MCFOLD void $initializeComponentFromCode(::BlockComponentStorage& blockComponentStorage) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $initializeComponentFromCode(::BlockComponentDescription::InitializationContext&) const;
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI void $initializeComponentFromCode(::BlockComponentDescription::InitializationContext& context) const;
#else // LL_PLAT_C
    MCFOLD void $initializeComponentFromCode(::BlockComponentDescription::InitializationContext& context) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handleVersionBasedInitialization(::SemVersion const&);
#else // @header-generator platform
    MCAPI void $handleVersionBasedInitialization(::SemVersion const& originalJsonVersion);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::CompoundTag $buildUnboundDataNetworkTag() const;
#else // @header-generator platform
    MCAPI ::CompoundTag $buildUnboundDataNetworkTag() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $initializeUnboundDataFromNetwork(::CompoundTag const&);
#else // @header-generator platform
    MCAPI void $initializeUnboundDataFromNetwork(::CompoundTag const& tag);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
