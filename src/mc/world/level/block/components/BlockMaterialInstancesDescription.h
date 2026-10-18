#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/TintMethod.h"
#include "mc/world/level/block/components/BlockComponentDescription.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/block/components/BlockMaterialInstance.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/block/components/BlockMaterialInstancePackedBools.h"

// auto generated forward declare list
// clang-format off
class BlockComponentStorage;
class CompoundTag;
class Experiments;
class SemVersion;
class SemVersionConstant;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct BlockMaterialInstance;
#endif // @header-generator platform
namespace Json { class Value; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct BlockMaterialInstancesDescription : public ::BlockComponentDescription {
public:
    // BlockMaterialInstancesDescription inner types declare
    // clang-format off
    struct BlockMaterialInstanceData;
    struct BlockMaterialData;
    // clang-format on

    // BlockMaterialInstancesDescription inner types define
    struct BlockMaterialInstanceData {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::string>                       textureName;
#else // @header-generator platform
        ::ll::TypedStorage<8, 32, ::std::string>                     textureName;
#endif // @header-generator platform
        ::ll::TypedStorage<4, 4, float>                              ambientOcclusion;
        ::ll::TypedStorage<1, 1, ::BlockRenderLayer>                 renderLayer;
        ::ll::TypedStorage<1, 1, ::TintMethod>                       tintMethod;
        ::ll::TypedStorage<1, 1, ::BlockMaterialInstancePackedBools> packedBools;
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        BlockMaterialInstanceData& operator=(BlockMaterialInstanceData const&);
        BlockMaterialInstanceData();
#else // @header-generator platform
#endif // @header-generator platform
    };

    struct BlockMaterialData {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::string>                                                    materialName;
        ::ll::TypedStorage<8, 32, ::BlockMaterialInstancesDescription::BlockMaterialInstanceData> materialInstanceData;
        // NOLINTEND

    public:
        // prevent constructor by default
        BlockMaterialData& operator=(BlockMaterialData const&);
        BlockMaterialData();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~BlockMaterialData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
#else // @header-generator platform
        ::ll::TypedStorage<8, 32, ::std::string>                                                  materialName;
        ::ll::TypedStorage<8, 40, ::BlockMaterialInstancesDescription::BlockMaterialInstanceData> materialInstanceData;
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, BlockMaterialInstance>> mMaterials;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, std::string>>           mMaterialMappings;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::BlockMaterialInstance>> mMaterials;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::std::string>>           mMaterialMappings;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    BlockMaterialInstancesDescription(BlockMaterialInstancesDescription const&);
    BlockMaterialInstancesDescription();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~BlockMaterialInstancesDescription();
#else // @header-generator platform
    virtual ::std::string const& getName() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string const& getName() const;
#else // @header-generator platform
    virtual void initializeComponentFromCode(::BlockComponentStorage& blockComponentStorage) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void initializeComponent(::BlockComponentStorage&) const;
#else // @header-generator platform
    virtual void initializeComponent(::BlockComponentStorage& blockComponentStorage) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void initializeComponentFromCode(::BlockComponentStorage&) const;
#else // @header-generator platform
    virtual bool isNetworkComponent() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isNetworkComponent() const;
#else // @header-generator platform
    virtual ::std::unique_ptr<::CompoundTag> buildNetworkTag(::cereal::ReflectionCtx const& ctx) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<CompoundTag> buildNetworkTag(::cereal::ReflectionCtx const&) const;
#else // @header-generator platform
    virtual void initializeFromNetwork(::CompoundTag const& tag, ::cereal::ReflectionCtx const& ctx) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void initializeFromNetwork(::CompoundTag const&, ::cereal::ReflectionCtx const&);
#else // @header-generator platform
    virtual void handleVersionBasedInitialization(::SemVersion const& originalJsonVersion) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handleVersionBasedInitialization(::SemVersion const&);
#else // @header-generator platform
    virtual ~BlockMaterialInstancesDescription() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit BlockMaterialInstancesDescription(
        std::vector<BlockMaterialInstancesDescription::BlockMaterialData> const&
#else // @header-generator platform
    MCAPI explicit BlockMaterialInstancesDescription(
        ::std::vector<::BlockMaterialInstancesDescription::BlockMaterialData> const& materialDatas
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI BlockMaterialInstancesDescription(
        std::string const&,
        ::BlockRenderLayer const,
        float,
        bool,
        ::TintMethod,
        bool,
        bool,
        bool,
        bool
#else // @header-generator platform
    MCAPI BlockMaterialInstancesDescription(
        ::std::string const& textureName,
        ::BlockRenderLayer   renderLayer,
        float                ambientOcclusion,
        bool                 faceDimming,
        ::TintMethod         tintMethod,
        bool                 randomizeUVRotation,
        bool                 supportsTextureVariations,
        bool                 alphaMaskedTint,
        bool                 dithering
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool const isRenderLayerOpaque() const;
#else // @header-generator platform
    MCAPI ::BlockMaterialInstancesDescription& operator=(::BlockMaterialInstancesDescription const&);
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
    MCNAPI static bool postParseConstraint(::Experiments const&, ::Json::Value const&, ::SemVersion const&);
#else // @header-generator platform
    MCAPI static bool
    postParseConstraint(::Experiments const&, ::Json::Value const& componentJson, ::SemVersion const& jsonVersion);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ulong const& MATERIALS_LIMIT();
#else // @header-generator platform
    MCAPI static ::std::string const& NameID();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& NameID();

    MCNAPI static ::SemVersionConstant const& VARIATIONS_TEXTURE_SUPPORT_MIN_VERSION();
#else // @header-generator platform
    MCAPI static ::SemVersionConstant const& VARIATIONS_TEXTURE_SUPPORT_MIN_VERSION();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::vector<BlockMaterialInstancesDescription::BlockMaterialData> const&);
#else // @header-generator platform
    MCAPI void* $ctor(::std::vector<::BlockMaterialInstancesDescription::BlockMaterialData> const& materialDatas);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string const&, ::BlockRenderLayer const, float, bool, ::TintMethod, bool, bool, bool, bool);
#else // @header-generator platform
    MCAPI void* $ctor(
        ::std::string const& textureName,
        ::BlockRenderLayer   renderLayer,
        float                ambientOcclusion,
        bool                 faceDimming,
        ::TintMethod         tintMethod,
        bool                 randomizeUVRotation,
        bool                 supportsTextureVariations,
        bool                 alphaMaskedTint,
        bool                 dithering
    );
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
    MCFOLD void $initializeComponentFromCode(::BlockComponentStorage& blockComponentStorage) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $initializeComponentFromCode(::BlockComponentStorage&) const;
#else // @header-generator platform
    MCAPI void $initializeComponent(::BlockComponentStorage& blockComponentStorage) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isNetworkComponent() const;
#else // @header-generator platform
    MCFOLD bool $isNetworkComponent() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<CompoundTag> $buildNetworkTag(::cereal::ReflectionCtx const&) const;
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::CompoundTag> $buildNetworkTag(::cereal::ReflectionCtx const& ctx) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $initializeFromNetwork(::CompoundTag const&, ::cereal::ReflectionCtx const&);
#else // @header-generator platform
    MCAPI void $initializeFromNetwork(::CompoundTag const& tag, ::cereal::ReflectionCtx const& ctx);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handleVersionBasedInitialization(::SemVersion const&);
#else // @header-generator platform
    MCAPI void $handleVersionBasedInitialization(::SemVersion const& originalJsonVersion);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
