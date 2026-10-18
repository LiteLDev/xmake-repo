#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/events/TextProcessingEventOrigin.h"
#include "mc/server/TextFilteringProcessor.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/util/CallbackToken.h"
#else // @header-generator platform
#include "mc/server/safety/TextFilteringEvent.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class BlockCommandOrigin;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class CallbackToken;
#endif // @header-generator platform
class Player;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace Safety { struct TextFilterResult; }
#endif // @header-generator platform
// clang-format on

namespace Bedrock::Safety {

class MockTextFilteringProcessor : public ::TextFilteringProcessor {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 248> mTaskGroup;
    ::ll::UntypedStorage<8, 48>  mProcessAnonymouseMessageFunc;
    ::ll::UntypedStorage<8, 48>  mProcessMessagesWithPlayerFunc;
    ::ll::UntypedStorage<8, 48>  mProcessMessagesWithBlockOriginFunc;
    ::ll::UntypedStorage<8, 48>  mOnStartShutdownFunc;
#else // @header-generator platform
    ::ll::TypedStorage<8, 336, ::TaskGroup> mTaskGroup;
    ::ll::TypedStorage<
        8,
        64,
        ::std::function<::CallbackToken(
            ::TextProcessingEventOrigin,
            ::std::vector<::std::string> const&,
            ::std::function<void(
                ::std::vector<::std::string> const&,
                ::std::vector<::std::string> const&,
                ::std::vector<::Safety::TextFilteringEvent> const&
            )>
        )>>
        mProcessAnonymouseMessageFunc;
    ::ll::TypedStorage<
        8,
        64,
        ::std::function<::CallbackToken(
            ::Player const&,
            ::TextProcessingEventOrigin,
            ::std::vector<::std::string> const&,
            ::std::function<void(
                ::std::vector<::std::string> const&,
                ::std::vector<::std::string> const&,
                ::std::vector<::Safety::TextFilteringEvent> const&
            )>
        )>>
        mProcessMessagesWithPlayerFunc;
    ::ll::TypedStorage<
        8,
        64,
        ::std::function<::CallbackToken(
            ::BlockCommandOrigin const&,
            ::TextProcessingEventOrigin,
            ::std::vector<::std::string> const&,
            ::std::function<void(
                ::std::vector<::std::string> const&,
                ::std::vector<::std::string> const&,
                ::std::vector<::Safety::TextFilteringEvent> const&
            )>
        )>>
                                                       mProcessMessagesWithBlockOriginFunc;
    ::ll::TypedStorage<8, 64, ::std::function<void()>> mOnStartShutdownFunc;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~MockTextFilteringProcessor() = default;
#else // @header-generator platform
    virtual ~MockTextFilteringProcessor() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::CallbackToken processAnonymousMessages(::TextProcessingEventOrigin, std::vector<std::string> const&, std::function<void (const std::vector<std::string>&, const std::vector<std::string>&, const std::vector<::Safety::TextFilteringEvent>&)>);
#else // @header-generator platform
    virtual ::CallbackToken processAnonymousMessages(
        ::TextProcessingEventOrigin,
        ::std::vector<::std::string> const&,
        ::std::function<void(
            ::std::vector<::std::string> const&,
            ::std::vector<::std::string> const&,
            ::std::vector<::Safety::TextFilteringEvent> const&
        )>
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::CallbackToken processMessages(::BlockCommandOrigin const&, ::TextProcessingEventOrigin, std::vector<std::string> const&, std::function<void (const std::vector<std::string>&, const std::vector<std::string>&, const std::vector<::Safety::TextFilteringEvent>&)>);
#else // @header-generator platform
    virtual ::CallbackToken processMessages(
        ::Player const&,
        ::TextProcessingEventOrigin,
        ::std::vector<::std::string> const&,
        ::std::function<void(
            ::std::vector<::std::string> const&,
            ::std::vector<::std::string> const&,
            ::std::vector<::Safety::TextFilteringEvent> const&
        )>
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::CallbackToken processMessages(::Player const&, ::TextProcessingEventOrigin, std::vector<std::string> const&, std::function<void (const std::vector<std::string>&, const std::vector<std::string>&, const std::vector<::Safety::TextFilteringEvent>&)>);
#else // @header-generator platform
    virtual ::CallbackToken processMessages(
        ::BlockCommandOrigin const&,
        ::TextProcessingEventOrigin,
        ::std::vector<::std::string> const&,
        ::std::function<void(
            ::std::vector<::std::string> const&,
            ::std::vector<::std::string> const&,
            ::std::vector<::Safety::TextFilteringEvent> const&
        )>
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Threading::Async<::Safety::TextFilterResult> processAnonymousMessagesAsync(::TextProcessingEventOrigin, std::vector<std::string> const&);
#else // @header-generator platform
    virtual ::Bedrock::Threading::Async<::Safety::TextFilterResult>
    processAnonymousMessagesAsync(::TextProcessingEventOrigin, ::std::vector<::std::string> const&) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Threading::Async<::Safety::TextFilterResult> processMessagesAsync(::Player const&, ::TextProcessingEventOrigin, std::vector<std::string> const&);
#else // @header-generator platform
    virtual ::Bedrock::Threading::Async<::Safety::TextFilterResult> processMessagesAsync(
        ::Player const&,
        ::TextProcessingEventOrigin,
        ::std::vector<::std::string> const&
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onStartShutdown();
    // clang-format on
#else // @header-generator platform
    virtual void onStartShutdown() /*override*/;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock::Safety
