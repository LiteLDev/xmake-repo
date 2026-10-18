#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IMinecraftGame;
struct ControllerIDtoClientMap;
// clang-format on

class MinecraftGameShimComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<IMinecraftGame*>> mGame;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftGameShimComponent& operator=(MinecraftGameShimComponent const&);
    MinecraftGameShimComponent(MinecraftGameShimComponent const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MinecraftGameShimComponent();

    virtual bool isInGame() const;

    virtual void requestLeaveGame(bool, bool);

    virtual void quit(std::string const&, std::string const&);

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<ControllerIDtoClientMap>> retrieveCIDToClientMap() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit MinecraftGameShimComponent(::gsl::not_null<IMinecraftGame*>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gsl::not_null<IMinecraftGame*>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isInGame() const;

    MCNAPI void $requestLeaveGame(bool, bool);

    MCNAPI void $quit(std::string const&, std::string const&);

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<ControllerIDtoClientMap>> $retrieveCIDToClientMap() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IMinecraftGame;
struct ControllerIDtoClientMap;
// clang-format on

class MinecraftGameShimComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::IMinecraftGame*>> mGame;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MinecraftGameShimComponent() = default;

    virtual bool isInGame() const;

    virtual void requestLeaveGame(bool switchScreen, bool sync);

    virtual void quit(::std::string const& src, ::std::string const& reason);

    virtual ::Bedrock::NotNullNonOwnerPtr<::ControllerIDtoClientMap> retrieveCIDToClientMap() const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isInGame() const;

    MCNAPI void $requestLeaveGame(bool switchScreen, bool sync);

    MCNAPI void $quit(::std::string const& src, ::std::string const& reason);

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::ControllerIDtoClientMap> $retrieveCIDToClientMap() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class MinecraftGameShimComponent {};
#endif // @header-generator platform
#endif // @header-generator platform
