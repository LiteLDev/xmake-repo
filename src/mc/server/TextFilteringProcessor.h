#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/events/TextProcessingEventOrigin.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/server/safety/ChatFloodingAction.h"
#else // @header-generator platform
#include "mc/server/safety/TextFilteringEvent.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class BlockCommandOrigin;
class CallbackToken;
class Player;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace Safety { struct TextFilterResult; }
#endif // @header-generator platform
// clang-format on

class TextFilteringProcessor : public ::Bedrock::EnableNonOwnerReferences {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // TextFilteringProcessor inner types define
    using MessageFilteredCallback = std::function<void(
        const std::vector<std::string>&,
        const std::vector<std::string>&,
        const std::vector<::Safety::TextFilteringEvent>&
    )>;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~TextFilteringProcessor() = default;
#else // @header-generator platform
    virtual ~TextFilteringProcessor() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::CallbackToken processAnonymousMessages(::TextProcessingEventOrigin, std::vector<std::string> const&, std::function<void (const std::vector<std::string>&, const std::vector<std::string>&, const std::vector<::Safety::TextFilteringEvent>&)>) = 0;
#else // @header-generator platform
    virtual ::CallbackToken processAnonymousMessages(
        ::TextProcessingEventOrigin,
        ::std::vector<::std::string> const&,
        ::std::function<void(
            ::std::vector<::std::string> const&,
            ::std::vector<::std::string> const&,
            ::std::vector<::Safety::TextFilteringEvent> const&
        )>
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::CallbackToken processMessages(::BlockCommandOrigin const&, ::TextProcessingEventOrigin, std::vector<std::string> const&, std::function<void (const std::vector<std::string>&, const std::vector<std::string>&, const std::vector<::Safety::TextFilteringEvent>&)>) = 0;
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
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::CallbackToken processMessages(::Player const&, ::TextProcessingEventOrigin, std::vector<std::string> const&, std::function<void (const std::vector<std::string>&, const std::vector<std::string>&, const std::vector<::Safety::TextFilteringEvent>&)>) = 0;
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
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Threading::Async<::Safety::TextFilterResult> processAnonymousMessagesAsync(::TextProcessingEventOrigin, std::vector<std::string> const&) = 0;
#else // @header-generator platform
    virtual ::Bedrock::Threading::Async<::Safety::TextFilterResult>
    processAnonymousMessagesAsync(::TextProcessingEventOrigin, ::std::vector<::std::string> const&) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Threading::Async<::Safety::TextFilterResult> processMessagesAsync(::Player const&, ::TextProcessingEventOrigin, std::vector<std::string> const&) = 0;
#else // @header-generator platform
    virtual ::Bedrock::Threading::Async<::Safety::TextFilterResult>
    processMessagesAsync(::Player const&, ::TextProcessingEventOrigin, ::std::vector<::std::string> const&) = 0;
#endif // @header-generator platform

    virtual void onStartShutdown() = 0;
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format on
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};
