#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/config/ChatRestrictionLevel.h"
#include "mc/config/player_capabilities/ISharedData.h"

// auto generated forward declare list
// clang-format off
class Level;
struct GameRuleId;
// clang-format on

namespace PlayerCapabilities {

struct SharedData : public ::PlayerCapabilities::ISharedData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Level const&> mLevel;
    // NOLINTEND

public:
    // prevent constructor by default
    SharedData& operator=(SharedData const&);
    SharedData(SharedData const&);
    SharedData();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~SharedData();
#else // @header-generator platform
    virtual ::std::optional<bool> isGameRuleEnabled(::GameRuleId const rule) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<bool> isGameRuleEnabled(::GameRuleId const) const;

    virtual ::ChatRestrictionLevel getChatRestrictionLevel() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::ChatRestrictionLevel getChatRestrictionLevel() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<bool> $isGameRuleEnabled(::GameRuleId const) const;
#else // @header-generator platform
    MCNAPI ::std::optional<bool> $isGameRuleEnabled(::GameRuleId const rule) const;
#endif // @header-generator platform

    MCNAPI ::ChatRestrictionLevel $getChatRestrictionLevel() const;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace PlayerCapabilities
