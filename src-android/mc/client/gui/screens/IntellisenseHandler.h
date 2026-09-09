#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemInstance.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceScreenModel;
class CommandOrigin;
class CommandRegistry;
struct AutoCompleteInformation;
struct CommandSyntaxInformation;
// clang-format on

class IntellisenseHandler {
public:
    // IntellisenseHandler inner types declare
    // clang-format off
    struct AutoCompleteMessage;
    // clang-format on

    // IntellisenseHandler inner types define
    struct AutoCompleteMessage {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string>     text;
        ::ll::TypedStorage<8, 128, ::ItemInstance> itemInstance;
        // NOLINTEND

    public:
        // prevent constructor by default
        AutoCompleteMessage& operator=(AutoCompleteMessage const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~AutoCompleteMessage();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                              mIntellisenseMessages;
    ::ll::TypedStorage<1, 1, bool>                                                   mIsDevConsole;
    ::ll::TypedStorage<8, 24, std::string>                                           mLastTabCompleteMessage;
    ::ll::TypedStorage<4, 4, int>                                                    mLastTabCompleteIndex;
    ::ll::TypedStorage<1, 1, bool>                                                   mInitTabComplete;
    ::ll::TypedStorage<1, 1, bool>                                                   mNeedsLayoutUpdate;
    ::ll::TypedStorage<4, 4, int>                                                    mAutoCompleteGridSize;
    ::ll::TypedStorage<8, 24, std::vector<IntellisenseHandler::AutoCompleteMessage>> mAutoCompleteMessages;
    // NOLINTEND

public:
    // prevent constructor by default
    IntellisenseHandler();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit IntellisenseHandler(bool);

    MCNAPI std::unique_ptr<AutoCompleteInformation>
           _getAutoCompleteOptions(::CommandOrigin const&, std::string const&, uint, ::CommandRegistry&, bool) const;

    MCNAPI std::unique_ptr<CommandOrigin> _getCommandOrigin(std::weak_ptr<ClientInstanceScreenModel>) const;

    MCNAPI void _updateAutoCompleteMessages(
        ::AutoCompleteInformation const&,
        ::CommandOrigin const&,
        ::CommandRegistry const&,
        bool,
        bool
    );

    MCNAPI int getAutoCompleteGridSize() const;

    MCNAPI int getAutoCompleteItemId(int);

    MCNAPI std::vector<IntellisenseHandler::AutoCompleteMessage> const& getAutoCompleteMessages() const;

    MCNAPI std::string getAutoCompleteText(int);

    MCNAPI int getLastTabCompleteIndex() const;

    MCNAPI bool getNeedsLayoutUpdate() const;

    MCNAPI void handleClickComplete(std::weak_ptr<ClientInstanceScreenModel>, std::string&, int);

    MCNAPI void handleTabComplete(std::weak_ptr<ClientInstanceScreenModel>, std::string&, int);

    MCNAPI void
    handleTabComplete(std::weak_ptr<ClientInstanceScreenModel>, ::CommandOrigin const&, std::string&, int, bool);

    MCNAPI bool isAutoCompleteSuggestion(int) const;

    MCNAPI void resetTabCompleteProgress();

    MCNAPI void setAutoCompleteGridSize(int);

    MCNAPI void setNeedsLayoutUpdate(bool);

    MCNAPI void updateIntellisense(std::weak_ptr<ClientInstanceScreenModel>, std::string const&);

    MCNAPI ~IntellisenseHandler();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
