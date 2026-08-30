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
class ItemStack;
class Level;
class Player;
struct DimensionType;
namespace Util { struct ReplacementResults; }
// clang-format on

class LootCommand : public ::Command {
public:
    // LootCommand inner types define
    enum class Target : int {
        Spawn   = 0,
        Give    = 1,
        Insert  = 2,
        Replace = 3,
        Error   = 4,
    };

    enum class Source : int {
        Loot  = 0,
        Kill  = 1,
        Mine  = 2,
        Error = 3,
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
    ::ll::TypedStorage<8, 24, std::string>                         mLootTable;
    ::ll::TypedStorage<8, 24, std::string>                         mTool;
    ::ll::UntypedStorage<8, 200>                                   mEntitySource;
    ::ll::UntypedStorage<8, 200>                                   mEntityTarget;
    ::ll::UntypedStorage<8, 200>                                   mPlayerTarget;
    ::ll::TypedStorage<4, 4, ::BlockSlot>                          mBlockSlot;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::EquipmentSlot> mEquipmentSlot;
    ::ll::TypedStorage<4, 4, int>                                  mSlotId;
    ::ll::TypedStorage<4, 4, int>                                  mConsecutiveSlotFillCount;
    ::ll::TypedStorage<1, 1, bool>                                 mSlotFillCountIsSet;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LootCommand();

    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _outputError(::CommandOutput&, ::Util::ReplacementResults const, ::Actor const*) const;

    MCNAPI void _outputSuccess(::CommandOutput&, int) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void setup(::CommandRegistry&, ::ItemRegistryRef const);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $execute(::CommandOrigin const&, ::CommandOutput&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
