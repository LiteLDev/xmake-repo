#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandItem.h"

struct AutoCompleteOption {
public:
    // AutoCompleteOption inner types define
    using CursorPos = uint;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>  visualText;
    ::ll::TypedStorage<8, 24, std::string>  tabCompleteText;
    ::ll::TypedStorage<8, 24, std::string>  description;
    ::ll::TypedStorage<4, 4, uint>          matchStart;
    ::ll::TypedStorage<4, 4, uint>          matchLength;
    ::ll::TypedStorage<4, 4, uint>          commandLineMatchStart;
    ::ll::TypedStorage<4, 4, uint>          commandLineMatchOffset;
    ::ll::TypedStorage<8, 8, ::CommandItem> item;
    ::ll::TypedStorage<1, 1, bool>          highlight;
    // NOLINTEND

public:
    // prevent constructor by default
    AutoCompleteOption& operator=(AutoCompleteOption const&);
    AutoCompleteOption(AutoCompleteOption const&);
    AutoCompleteOption();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AutoCompleteOption(::AutoCompleteOption&&);

    MCNAPI ~AutoCompleteOption();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::AutoCompleteOption&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
