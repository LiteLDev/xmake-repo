#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/components/BlockComponentDescription.h"
#include "mc/world/level/block/components/ItemSpecificSpeed.h"

// auto generated forward declare list
// clang-format off
class BlockComponentStorage;
#if defined(LL_PLAT_A) // @header-generator platform
class CerealSchemaUpgradeSet;
#else // @header-generator platform
#endif // @header-generator platform
class CompoundTag;
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct BlockDestructibleByMiningDescription : public ::BlockComponentDescription {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                           mSecondsToDestroy;
    ::ll::TypedStorage<8, 24, std::vector<ItemSpecificSpeed>> mItemSpecificSpeeds;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                               mSecondsToDestroy;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemSpecificSpeed>> mItemSpecificSpeeds;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~BlockDestructibleByMiningDescription();
#else // @header-generator platform
    virtual ::std::string const& getName() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string const& getName() const;
#else // @header-generator platform
    virtual void initializeComponent(::BlockComponentStorage& blockComponentSortage) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void initializeComponent(::BlockComponentStorage&) const;
#else // @header-generator platform
    virtual void initializeComponentFromCode(::BlockComponentStorage& blockComponentStorage) const /*override*/;
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
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BlockDestructibleByMiningDescription(float);
#else // @header-generator platform
    virtual ~BlockDestructibleByMiningDescription() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindType(::cereal::ReflectionCtx&);

    MCNAPI static void registerVersionUpgrades(::CerealSchemaUpgradeSet&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
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
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(float);
#else // @header-generator platform
    MCAPI static ::std::string const& NameID();
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
    MCAPI void $initializeComponent(::BlockComponentStorage& blockComponentSortage) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $initializeComponentFromCode(::BlockComponentStorage&) const;
#else // @header-generator platform
    MCFOLD void $initializeComponentFromCode(::BlockComponentStorage& blockComponentStorage) const;
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
