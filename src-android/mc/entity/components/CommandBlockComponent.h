#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BaseCommandBlock.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class DataLoadHelper;
namespace Bedrock::Safety { class RedactableString; }
// clang-format on

class CommandBlockComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 160, ::BaseCommandBlock> mBaseCommandBlock;
    ::ll::TypedStorage<4, 4, int>                  mCurrentTickCount;
    ::ll::TypedStorage<1, 1, bool>                 mTicking;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandBlockComponent& operator=(CommandBlockComponent const&);
    CommandBlockComponent(CommandBlockComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _updateTickCount();

    MCNAPI void addAdditionalSaveData(::CompoundTag&) const;

    MCNAPI int decrementTickCount();

    MCNAPI int getCurrentTickCount() const;

    MCNAPI bool getTicking() const;

    MCNAPI void initFromDefinition(::Actor&);

    MCNAPI void
    onCommandBlockUpdate(::Actor&, std::string const&, bool, ::Bedrock::Safety::RedactableString const&, int, bool);

    MCNAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI void resetCurrentTick();

    MCNAPI void setLastOutput(::Actor&, std::string const&);

    MCNAPI void setName(::Actor&, ::Bedrock::Safety::RedactableString const&);

    MCNAPI void setTicking(bool);

    MCNAPI void setTrackOutput(::Actor&, bool);

    MCNAPI ~CommandBlockComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
