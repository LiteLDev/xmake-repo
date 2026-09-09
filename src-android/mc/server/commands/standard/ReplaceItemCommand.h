#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/EquipmentSlot.h"
#include "mc/server/commands/Command.h"
#include "mc/server/commands/CommandItem.h"
#include "mc/server/commands/CommandPosition.h"
#include "mc/server/commands/CommandSelector.h"
#include "mc/world/level/block/BlockSlot.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
namespace Json { class Value; }
namespace Util { struct ReplacementResults; }
// clang-format on

class ReplaceItemCommand : public ::Command {
public:
    // ReplaceItemCommand inner types define
    enum class TargetType : int {
        Block     = 0,
        Entity    = 1,
        Undefined = 2,
    };

    enum class ReplaceMode : int {
        Destroy = 0,
        Keep    = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ReplaceItemCommand::TargetType>     mTargetType;
    ::ll::UntypedStorage<8, 200>                                   mTargetEntity;
    ::ll::TypedStorage<4, 16, ::CommandPosition>                   mTargetBlock;
    ::ll::TypedStorage<4, 4, ::BlockSlot>                          mBlockSlot;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::EquipmentSlot> mEquipmentSlot;
    ::ll::TypedStorage<4, 4, int>                                  mSlotId;
    ::ll::TypedStorage<8, 8, ::CommandItem>                        mItem;
    ::ll::TypedStorage<4, 4, int>                                  mAmount;
    ::ll::TypedStorage<4, 4, int>                                  mData;
    ::ll::TypedStorage<4, 4, ::ReplaceItemCommand::ReplaceMode>    mReplaceMode;
    ::ll::UntypedStorage<8, 16>                                    mComponents;
    ::ll::TypedStorage<1, 1, bool>                                 mHaveComponents;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ReplaceItemCommand();

    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _outputError(::CommandOutput&, ::Util::ReplacementResults const, std::string const&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void setup(::CommandRegistry&);
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
