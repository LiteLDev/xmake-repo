#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/EquipmentSlot.h"
#include "mc/server/commands/Command.h"
#include "mc/server/commands/CommandPositionFloat.h"
#include "mc/server/commands/CommandSelector.h"
#include "mc/world/level/block/BlockSlot.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class ItemRegistryRef;
#if defined(LL_PLAT_A) // @header-generator platform
class ItemStack;
class Level;
#else // @header-generator platform
#endif // @header-generator platform
class Player;
#if defined(LL_PLAT_A) // @header-generator platform
struct DimensionType;
#else // @header-generator platform
#endif // @header-generator platform
namespace Util { struct ReplacementResults; }
// clang-format on

class LootCommand : public ::Command {
public:
    // LootCommand inner types define
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    enum class Source : int {
        Loot  = 0,
        Kill  = 1,
        Mine  = 2,
        Error = 3,
    };

#endif // @header-generator platform
    enum class Target : int {
        Spawn   = 0,
        Give    = 1,
        Insert  = 2,
        Replace = 3,
        Error   = 4,
#if defined(LL_PLAT_A) // @header-generator platform
    };

    enum class Source : int {
        Loot  = 0,
        Kill  = 1,
        Mine  = 2,
        Error = 3,
#else // @header-generator platform
#endif // @header-generator platform
    };

    enum class TargetIdentifier : int {
        Entity = 0,
        Block  = 1,
        Error  = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::CommandPositionFloat>              mPosition;
    ::ll::TypedStorage<4, 16, ::CommandPositionFloat>              mMinePosition;
    ::ll::TypedStorage<4, 4, ::LootCommand::Target>                mTarget;
    ::ll::TypedStorage<4, 4, ::LootCommand::Source>                mSource;
    ::ll::TypedStorage<4, 4, ::LootCommand::TargetIdentifier>      mReplacementIdentifier;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                         mLootTable;
    ::ll::TypedStorage<8, 24, std::string>                         mTool;
    ::ll::UntypedStorage<8, 200>                                   mEntitySource;
    ::ll::UntypedStorage<8, 200>                                   mEntityTarget;
    ::ll::UntypedStorage<8, 200>                                   mPlayerTarget;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                       mLootTable;
    ::ll::TypedStorage<8, 32, ::std::string>                       mTool;
    ::ll::TypedStorage<8, 200, ::CommandSelector<::Actor>>         mEntitySource;
    ::ll::TypedStorage<8, 200, ::CommandSelector<::Actor>>         mEntityTarget;
    ::ll::TypedStorage<8, 200, ::CommandSelector<::Player>>        mPlayerTarget;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, ::BlockSlot>                          mBlockSlot;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::EquipmentSlot> mEquipmentSlot;
    ::ll::TypedStorage<4, 4, int>                                  mSlotId;
    ::ll::TypedStorage<4, 4, int>                                  mConsecutiveSlotFillCount;
    ::ll::TypedStorage<1, 1, bool>                                 mSlotFillCountIsSet;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~LootCommand();

    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const;
#else // @header-generator platform
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _outputError(::CommandOutput&, ::Util::ReplacementResults const, ::Actor const*) const;

    MCNAPI void _outputSuccess(::CommandOutput&, int) const;
#else // @header-generator platform
    MCAPI void
    _outputError(::CommandOutput& output, ::Util::ReplacementResults const errorDetails, ::Actor const* entity) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void setup(::CommandRegistry&, ::ItemRegistryRef const);
    // NOLINTEND
#else // @header-generator platform
    MCAPI static void _outputSuccess(::CommandOutput& output, int numItemsDropped);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static void setup(::CommandRegistry& registry, ::ItemRegistryRef itemRegistry);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $execute(::CommandOrigin const&, ::CommandOutput&) const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $execute(::CommandOrigin const& origin, ::CommandOutput& output) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
