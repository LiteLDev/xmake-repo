#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/CallStackEntry.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace Scripting {

struct BaseError {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                            name;
    ::ll::TypedStorage<8, 24, std::string>                            message;
    ::ll::TypedStorage<8, 32, std::optional<std::string>>             sourceMapDebugId;
    ::ll::TypedStorage<8, 32, std::optional<std::string>>             mPackName;
    ::ll::TypedStorage<8, 24, std::vector<Scripting::CallStackEntry>> mCallStack;
    ::ll::TypedStorage<8, 32, std::optional<std::string>>             mCallStackStr;
    ::ll::TypedStorage<1, 1, bool>                                    throwAsString;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnkacfaf5;
    ::ll::UntypedStorage<8, 32> mUnk724204;
    ::ll::UntypedStorage<8, 40> mUnk7b9e22;
    ::ll::UntypedStorage<8, 40> mUnk364254;
    ::ll::UntypedStorage<8, 24> mUnka1db66;
    ::ll::UntypedStorage<8, 40> mUnk1599d8;
    ::ll::UntypedStorage<1, 1>  mUnkaf2820;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    BaseError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BaseError(::Scripting::BaseError const&);

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI BaseError(std::string const&, std::string const&);

    MCNAPI std::vector<Scripting::CallStackEntry> const& getCallStack() const;

    MCNAPI std::optional<std::string> const& getCallStackStr() const;

    MCNAPI std::optional<std::string_view> const getPackName() const;
#else // @header-generator platform
    MCNAPI BaseError(::std::string const& name_, ::std::string const& message_);
#endif // @header-generator platform

    MCNAPI ::Scripting::BaseError& operator=(::Scripting::BaseError&&);

    MCNAPI ::Scripting::BaseError& operator=(::Scripting::BaseError const&);

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setCallStack(std::string);
#else // @header-generator platform
    MCNAPI void setCallStack(::std::string _backtrace);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setPackName(std::string const&);

    MCNAPI std::string toString() const;
#else // @header-generator platform
    MCNAPI ::std::string toString() const;
#endif // @header-generator platform

    MCNAPI ~BaseError();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::BaseError const&);

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string const&, std::string const&);
#else // @header-generator platform
    MCNAPI void* $ctor(::std::string const& name_, ::std::string const& message_);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
