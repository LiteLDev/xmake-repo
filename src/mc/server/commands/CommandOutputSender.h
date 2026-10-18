#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/Subject.h"
#include "mc/server/commands/CommandPermissionLevel.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class AutomationCmdOutput;
#else // @header-generator platform
#endif // @header-generator platform
class CommandOrigin;
class CommandOutput;
namespace CodeBuilder { class CommandOutputObserver; }
namespace Core { class SingleThreadedLock; }
namespace Json { class Value; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class AutomationCmdOutput;
#endif // @header-generator platform
// clang-format on

class CommandOutputSender {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 48> mEmplaceTestCommandOutputCallback;
    ::ll::UntypedStorage<8, 16> mCodeBuilderSubject;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::function<void(::AutomationCmdOutput&)>> mEmplaceTestCommandOutputCallback;
    ::ll::TypedStorage<
        8,
        8,
        ::std::unique_ptr<::Core::Subject<::CodeBuilder::CommandOutputObserver, ::Core::SingleThreadedLock>>>
        mCodeBuilderSubject;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~CommandOutputSender();
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual ~CommandOutputSender() = default;
#else // LL_PLAT_C
    virtual ~CommandOutputSender();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void send(::CommandOrigin const&, ::CommandOutput const&);
#else // @header-generator platform
    virtual void send(::CommandOrigin const& origin, ::CommandOutput const& output);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void registerOutputCallback(std::function<void(AutomationCmdOutput&)> const&);
#else // @header-generator platform
    virtual void registerOutputCallback(::std::function<void(::AutomationCmdOutput&)> const& callback);
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI CommandOutputSender();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::Json::Value _toJson(::CommandOutput const& commandOutput) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _sendToCodeBuilder(::CommandOrigin const&, ::CommandOutput const&);

    MCNAPI ::Json::Value _toJson(::CommandOutput const&) const;

    MCNAPI void addObserver(::CodeBuilder::CommandOutputObserver&);
#else // @header-generator platform
    MCAPI void
    sendToAdmins(::CommandOrigin const& origin, ::CommandOutput const& output, ::CommandPermissionLevel opPermLevel);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::vector<std::string> translate(std::vector<std::string> const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI static ::std::vector<::std::string> translate(::std::vector<::std::string> const& in);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $send(::CommandOrigin const&, ::CommandOutput const&);
#else // @header-generator platform
    MCAPI void $send(::CommandOrigin const& origin, ::CommandOutput const& output);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $registerOutputCallback(std::function<void(AutomationCmdOutput&)> const&);
#else // @header-generator platform
    MCFOLD void $registerOutputCallback(::std::function<void(::AutomationCmdOutput&)> const& callback);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
