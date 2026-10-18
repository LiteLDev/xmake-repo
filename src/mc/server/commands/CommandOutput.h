#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/server/commands/CommandOutputMessage.h"
#include "mc/server/commands/CommandOutputParameter.h"
#include "mc/server/commands/CommandPropertyBag.h"
#endif // @header-generator platform

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/server/commands/CommandOutputMessage.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/server/commands/CommandOutputMessageType.h"
#include "mc/server/commands/CommandOutputType.h"

// auto generated forward declare list
// clang-format off
class Actor;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class CommandOutputMessage;
#endif // @header-generator platform
class CommandOutputParameter;
class CommandPropertyBag;
// clang-format on

class CommandOutput {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, ::CommandOutputType>                 mType;
    ::ll::TypedStorage<8, 8, std::unique_ptr<CommandPropertyBag>> mBag;
    ::ll::TypedStorage<8, 24, std::vector<CommandOutputMessage>>  mMessages;
    ::ll::TypedStorage<4, 4, uint>                                mSuccessCount;
    ::ll::TypedStorage<1, 1, bool>                                mHasPlayerText;
#else // @header-generator platform
    CommandOutputType                   mType;
    std::unique_ptr<CommandPropertyBag> mBag;
    std::vector<CommandOutputMessage>   mMessages;
    uint                                mSuccessCount;
    bool                                mHasPlayerText;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    void error(std::string_view msgId, std::vector<::CommandOutputParameter> const& params = {}) {
        addMessage(msgId, params, CommandOutputMessageType::Error);
    }

    template <class First, class... Args>
        requires(!std::is_same_v<std::remove_cvref_t<First>, std::vector<class CommandOutputParameter>>)
    void success(fmt::format_string<First, Args...> fmt, First&& _args, Args&&... args) {
        success(fmt::vformat(fmt.get(), fmt::make_format_args(_args, args...)));
    }

    template <class First, class... Args>
        requires(!std::is_same_v<std::remove_cvref_t<First>, std::vector<class CommandOutputParameter>>)
    void error(fmt::format_string<First, Args...> fmt, First&& _args, Args&&... args) {
        error(fmt::vformat(fmt.get(), fmt::make_format_args(_args, args...)));
    }

    CommandOutput() {
        mType          = CommandOutputType::None;
        mBag           = {};
        mMessages      = {};
        mSuccessCount  = 0;
        mHasPlayerText = false;
    }
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI CommandOutput();
#else // @header-generator platform
    MCAPI CommandOutput(::CommandOutput const& rhs);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI CommandOutput(::CommandOutput const&);
#else // @header-generator platform
    MCAPI explicit CommandOutput(::CommandOutputType type);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addMessage(std::string_view, std::vector<CommandOutputParameter> const&, ::CommandOutputMessageType);
#else // @header-generator platform
    MCAPI void addMessage(
        ::std::string_view                             msgId,
        ::std::vector<::CommandOutputParameter> const& params,
        ::CommandOutputMessageType                     type
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addToResultList(std::string const&, std::string const&);
#else // @header-generator platform
    MCAPI void addToResultList(::std::string const& key, ::Actor const& element);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addToResultList(std::string const&, ::Actor const&);
#else // @header-generator platform
    MCAPI ::CommandOutput& operator=(::CommandOutput const& rhs);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void error(std::string_view, std::vector<CommandOutputParameter> const&);

    MCNAPI void forceOutput(std::string_view, std::vector<CommandOutputParameter> const&);

    MCNAPI ::CommandPropertyBag const& getData() const;

    MCNAPI std::vector<CommandOutputMessage> const& getMessages() const;

    MCNAPI uint getSuccessCount() const;

    MCNAPI bool hasErrorMessage() const;

    MCNAPI ::CommandOutput& operator=(::CommandOutput const&);

    MCNAPI bool operator==(::CommandOutput const&) const;

    MCNAPI void setHasPlayerText();

    MCNAPI void success();

    MCNAPI void success(std::string_view, std::vector<CommandOutputParameter> const&);

    MCNAPI bool wantsData() const;
#else // @header-generator platform
    MCAPI void success(::std::string_view msgId, ::std::vector<::CommandOutputParameter> const& params = {});
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::optional<std::string> _mDataGetter(::CommandOutput const&);

    MCNAPI static void _mDataSetter(::CommandOutput&, std::optional<std::string> const);
#else // @header-generator platform
    MCAPI static void _mDataSetter(::CommandOutput& payload, ::std::optional<::std::string> jsonString);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI void* $ctor(::CommandOutput const& rhs);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::CommandOutput const&);
#else // @header-generator platform
    MCAPI void* $ctor(::CommandOutputType type);
#endif // @header-generator platform
    // NOLINTEND
};
