#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/json/Value.h"
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
namespace Json { class Value; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Util { struct ReplacementResults; }
// clang-format on

class ReplaceItemCommand : public ::Command {
public:
    // ReplaceItemCommand inner types define
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    enum class ReplaceMode : int {
        Destroy = 0,
        Keep    = 1,
    };

#endif // @header-generator platform
    enum class TargetType : int {
        Block     = 0,
        Entity    = 1,
        Undefined = 2,
    };

#if defined(LL_PLAT_A) // @header-generator platform
    enum class ReplaceMode : int {
        Destroy = 0,
        Keep    = 1,
    };

#else // @header-generator platform
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ReplaceItemCommand::TargetType>     mTargetType;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 200>                                   mTargetEntity;
#else // @header-generator platform
    ::ll::TypedStorage<8, 200, ::CommandSelector<::Actor>>         mTargetEntity;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 16, ::CommandPosition>                   mTargetBlock;
    ::ll::TypedStorage<4, 4, ::BlockSlot>                          mBlockSlot;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::EquipmentSlot> mEquipmentSlot;
    ::ll::TypedStorage<4, 4, int>                                  mSlotId;
    ::ll::TypedStorage<8, 8, ::CommandItem>                        mItem;
    ::ll::TypedStorage<4, 4, int>                                  mAmount;
    ::ll::TypedStorage<4, 4, int>                                  mData;
    ::ll::TypedStorage<4, 4, ::ReplaceItemCommand::ReplaceMode>    mReplaceMode;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 16>                                    mComponents;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::Json::Value>                       mComponents;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                                 mHaveComponents;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ReplaceItemCommand();

    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const;
#else // @header-generator platform
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _outputError(::CommandOutput&, ::Util::ReplacementResults const, std::string const&) const;
#else // @header-generator platform
    MCAPI void _outputError(
        ::CommandOutput&                 output,
        ::Util::ReplacementResults const errorDetails,
        ::std::string const&             itemName
    ) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void setup(::CommandRegistry&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static void setup(::CommandRegistry& registry);
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
