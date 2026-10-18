#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandSelectorResults.h"

// auto generated forward declare list
// clang-format off
class Actor;
#if defined(LL_PLAT_A) // @header-generator platform
class BlockPos;
#else // @header-generator platform
#endif // @header-generator platform
class Player;
#if defined(LL_PLAT_A) // @header-generator platform
class Vec3;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class CommandOutputParameter {
public:
    // CommandOutputParameter inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum NoCountType : uint {
#else // @header-generator platform
    enum class NoCountType : int {
#endif // @header-generator platform
        NoCount = 0,
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mString;
    ::ll::TypedStorage<4, 4, int>          mCount;
#else // @header-generator platform
    ::std::string mString;
    int           mCount;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    operator std::string const&() const { return mString; }
#endif // @header-generator platform

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    CommandOutputParameter& operator=(CommandOutputParameter const&);
#endif // @header-generator platform
    CommandOutputParameter();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit CommandOutputParameter(char const*);
#else // @header-generator platform
    MCAPI explicit CommandOutputParameter(::CommandSelectorResults<::Actor> const& entities);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit CommandOutputParameter(::Actor const&);
#else // @header-generator platform
    MCAPI explicit CommandOutputParameter(::std::vector<::Actor const*> const& entities);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit CommandOutputParameter(::Actor const*);
#else // @header-generator platform
    MCAPI explicit CommandOutputParameter(::CommandSelectorResults<::Player> const& players);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit CommandOutputParameter(bool);
#else // @header-generator platform
    MCAPI explicit CommandOutputParameter(::std::vector<::Player const*> const& players);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit CommandOutputParameter(::BlockPos);
#else // @header-generator platform
    MCAPI CommandOutputParameter(::CommandOutputParameter const& rhs);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit CommandOutputParameter(::CommandOutputParameter::NoCountType);
#else // @header-generator platform
    MCAPI explicit CommandOutputParameter(::std::vector<::std::string> const& strings);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit CommandOutputParameter(std::vector<const Actor*> const&);
#else // @header-generator platform
    MCAPI explicit CommandOutputParameter(::std::string const& text);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit CommandOutputParameter(std::vector<const Player*> const&);
#else // @header-generator platform
    MCAPI explicit CommandOutputParameter(char const* text);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit CommandOutputParameter(std::vector<std::string> const&);

    MCNAPI explicit CommandOutputParameter(::CommandSelectorResults<Actor> const&);

    MCNAPI explicit CommandOutputParameter(::CommandSelectorResults<Player> const&);

    MCNAPI CommandOutputParameter(::CommandOutputParameter const&);

    MCNAPI ::CommandOutputParameter& operator=(::CommandOutputParameter&&);
#else // @header-generator platform
    MCAPI ~CommandOutputParameter();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(char const*);
#else // @header-generator platform
    MCFOLD void* $ctor(::CommandSelectorResults<::Actor> const& entities);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Actor const&);
#else // @header-generator platform
    MCFOLD void* $ctor(::std::vector<::Actor const*> const& entities);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Actor const*);
#else // @header-generator platform
    MCFOLD void* $ctor(::CommandSelectorResults<::Player> const& players);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(bool);
#else // @header-generator platform
    MCFOLD void* $ctor(::std::vector<::Player const*> const& players);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::BlockPos);
#else // @header-generator platform
    MCAPI void* $ctor(::CommandOutputParameter const& rhs);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::CommandOutputParameter::NoCountType);
#else // @header-generator platform
    MCAPI void* $ctor(::std::vector<::std::string> const& strings);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::vector<const Actor*> const&);
#else // @header-generator platform
    MCAPI void* $ctor(::std::string const& text);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::vector<const Player*> const&);
#else // @header-generator platform
    MCAPI void* $ctor(char const* text);
    // NOLINTEND
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::vector<std::string> const&);

    MCNAPI void* $ctor(::CommandSelectorResults<Actor> const&);

    MCNAPI void* $ctor(::CommandSelectorResults<Player> const&);

    MCNAPI void* $ctor(::CommandOutputParameter const&);
#else // @header-generator platform
public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
