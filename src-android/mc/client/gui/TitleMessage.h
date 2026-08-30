#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TitleMessage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                mTitle;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mFilteredTitle;
    ::ll::TypedStorage<8, 24, std::string>                mSubtitle;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mFilteredSubtitle;
    ::ll::TypedStorage<4, 4, int>                         mFadeInTime;
    ::ll::TypedStorage<4, 4, int>                         mStayTime;
    ::ll::TypedStorage<4, 4, int>                         mFadeOutTime;
    ::ll::TypedStorage<8, 24, std::string>                mActionBarMessage;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mFilteredActionBarMessage;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TitleMessage();

    MCNAPI void clearTitleMessages();

    MCNAPI ::TitleMessage& copyTitleMessageWithSubtitle(::TitleMessage const&);

    MCNAPI std::string const& getActionBarMessage() const;

    MCNAPI int getFadeInTime() const;

    MCNAPI int getFadeOutTime() const;

    MCNAPI std::optional<std::string> const& getFilteredActionBarMessage() const;

    MCNAPI std::optional<std::string> const& getFilteredSubtitle() const;

    MCNAPI std::optional<std::string> const& getFilteredTitle() const;

    MCNAPI int getStayTime() const;

    MCNAPI std::string const& getSubtitle() const;

    MCNAPI bool hasSubtitle() const;

    MCNAPI bool hasTitle() const;

    MCNAPI ::TitleMessage& operator=(::TitleMessage const&);

    MCNAPI void resetTitle();

    MCNAPI void setActionBarMessage(std::string const&, std::optional<std::string>);

    MCNAPI void setSubtitle(std::string const&, std::optional<std::string> const);

    MCNAPI void setTitle(std::string const&, std::optional<std::string> const);

    MCNAPI void setTitleAnimationTimes(int, int, int);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
