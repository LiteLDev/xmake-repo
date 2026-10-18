#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BaseCommandBlock.h"

// auto generated forward declare list
// clang-format off
class Actor;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class BaseCommandBlock;
#endif // @header-generator platform
class CompoundTag;
class DataLoadHelper;
namespace Bedrock::Safety { class RedactableString; }
// clang-format on

class CommandBlockComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 160, ::BaseCommandBlock> mBaseCommandBlock;
#else // @header-generator platform
    ::ll::TypedStorage<8, 192, ::BaseCommandBlock> mBaseCommandBlock;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                  mCurrentTickCount;
    ::ll::TypedStorage<1, 1, bool>                 mTicking;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    CommandBlockComponent& operator=(CommandBlockComponent const&);
    CommandBlockComponent(CommandBlockComponent const&);

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _updateTickCount();
#else // @header-generator platform
    MCAPI void addAdditionalSaveData(::CompoundTag& entityTag) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addAdditionalSaveData(::CompoundTag&) const;
#else // @header-generator platform
    MCAPI void initFromDefinition(::Actor& owner);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int decrementTickCount();
#else // @header-generator platform
    MCAPI void onCommandBlockUpdate(
        ::Actor&                                   owner,
        ::std::string const&                       command,
        bool                                       trackOutput,
        ::Bedrock::Safety::RedactableString const& name,
        int                                        tickDelay,
        bool                                       executeOnFirstTick
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getCurrentTickCount() const;
#else // @header-generator platform
    MCAPI void readAdditionalSaveData(::Actor& owner, ::CompoundTag const& entityTag, ::DataLoadHelper& dataLoadHelper);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool getTicking() const;
#else // @header-generator platform
    MCAPI void setLastOutput(::Actor& owner, ::std::string const& lastOutput);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void setTrackOutput(::Actor& owner, bool trackOutput);
#endif
#endif // @header-generator platform
    // NOLINTEND
};
