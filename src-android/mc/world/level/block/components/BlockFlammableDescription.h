#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_20/block/LavaFlammable.h"
#include "mc/world/level/block/BurnOdds.h"
#include "mc/world/level/block/FlameOdds.h"
#include "mc/world/level/block/components/BlockComponentDescription.h"

// auto generated forward declare list
// clang-format off
class BlockComponentStorage;
class CerealSchemaUpgradeSet;
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct BlockFlammableDescription : public ::BlockComponentDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_26_20::LavaFlammable> mLavaFlammable;
    ::ll::TypedStorage<4, 4, int>                                    mCatchChanceModifier;
    ::ll::TypedStorage<4, 4, int>                                    mDestroyChanceModifier;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockFlammableDescription& operator=(BlockFlammableDescription const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockFlammableDescription();

    virtual std::string const& getName() const;

    virtual void initializeComponent(::BlockComponentStorage&) const;

    virtual void initializeComponentFromCode(::BlockComponentStorage&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BlockFlammableDescription(::FlameOdds, ::BurnOdds, ::SharedTypes::v1_26_20::LavaFlammable);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);

    MCNAPI static void registerVersionUpgrades(::CerealSchemaUpgradeSet&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string const& NameID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::FlameOdds, ::BurnOdds, ::SharedTypes::v1_26_20::LavaFlammable);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::string const& $getName() const;

    MCNAPI void $initializeComponent(::BlockComponentStorage&) const;

    MCNAPI void $initializeComponentFromCode(::BlockComponentStorage&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
