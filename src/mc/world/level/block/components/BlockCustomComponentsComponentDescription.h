#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/components/BlockComponentDescription.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/block/components/BlockCustomComponentData.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class BlockComponentStorage;
class CerealSchemaUpgradeSet;
class CompoundTag;
#if defined(LL_PLAT_A) // @header-generator platform
class SemVersion;
#else // @header-generator platform
struct BlockCustomComponentData;
#endif // @header-generator platform
namespace cereal { class DynamicValue; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class BlockCustomComponentsComponentDescription : public ::BlockComponentDescription {
public:
    // BlockCustomComponentsComponentDescription inner types declare
    // clang-format off
    struct ComponentOverrides;
    // clang-format on

    // BlockCustomComponentsComponentDescription inner types define
    struct ComponentOverrides {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool> overridePlayerInteract;
        ::ll::TypedStorage<1, 1, bool> overridePlayerPlacing;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 24, std::vector<BlockCustomComponentData>> mCustomComponentData;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, BlockCustomComponentsComponentDescription::ComponentOverrides>> mComponentOverrides;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockCustomComponentData>> mCustomComponentData;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::std::string, ::BlockCustomComponentsComponentDescription::ComponentOverrides>>
                                   mComponentOverrides;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, bool> mIsCustomComponentsV1;
    ::ll::TypedStorage<1, 1, bool> mHasPlayerInteractEvent;
    ::ll::TypedStorage<1, 1, bool> mHasPlayerPlacingEvent;
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format on
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~BlockCustomComponentsComponentDescription();
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
    virtual bool isNetworkComponent() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isNetworkComponent() const;
#else // @header-generator platform
    virtual ::std::unique_ptr<::CompoundTag> buildNetworkTag(::cereal::ReflectionCtx const& ctx) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<CompoundTag> buildNetworkTag(::cereal::ReflectionCtx const&) const;

    virtual void initializeFromNetwork(::CompoundTag const&, ::cereal::ReflectionCtx const&);
#else // @header-generator platform
    virtual void initializeFromNetwork(::CompoundTag const& tag, ::cereal::ReflectionCtx const& ctx) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addCustomComponent(std::string_view, ::cereal::DynamicValue, bool, bool);
#else // @header-generator platform
    MCAPI void addCustomComponent(
        ::std::string_view     compName,
        ::cereal::DynamicValue compData,
        bool                   overridePlayerInteract,
        bool                   overridePlayerPlacing
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::SemVersion getV2ReleaseVersion();
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCAPI static void registerVersionUpgrades(::CerealSchemaUpgradeSet& schemaUpgrades);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& NameID();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static ::std::string const& NameID();
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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
