#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "cstdarg"
#include "mc/deps/core/debug/log/ContextMessageLogger.h"
#include "mc/deps/core/debug/log/LogArea.h"
#include "mc/deps/core/debug/log/LogLevel.h"
#include "mc/deps/core/string/StaticOptimizedString.h"
#include "mc/deps/core/threading/InstancedThreadLocal.h"
#include "mc/deps/core/utility/DisableServiceLocatorOverride.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/typeid_t.h"
#include "mc/diagnostics/LogAreaID.h"

// auto generated forward declare list
// clang-format off
class ContentLogEndPoint;
// clang-format on

class ContentLog : public ::Bedrock::EnableNonOwnerReferences, public ::DisableServiceLocatorOverride {
public:
    // ContentLog inner types declare
    // clang-format off
    class ContentLogEndPointData;
    class ScopeHandler;
    class ThreadSpecificData;
    class ContentLogScope;
    // clang-format on

    // ContentLog inner types define
    class ContentLogEndPointData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mContentLogEndPoint;
        // NOLINTEND

    public:
        // prevent constructor by default
        ContentLogEndPointData& operator=(ContentLogEndPointData const&);
        ContentLogEndPointData(ContentLogEndPointData const&);
        ContentLogEndPointData();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~ContentLogEndPointData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    class ScopeHandler : public ::std::enable_shared_from_this<ContentLog::ScopeHandler> {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 112> mThreadSpecificData;
        // NOLINTEND
    };

    class ThreadSpecificData {
    public:
        // ThreadSpecificData inner types declare
        // clang-format off
        struct ScopeData;
        // clang-format on

        // ThreadSpecificData inner types define
        struct ScopeData {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::TypedStorage<8, 24, std::optional<std::string_view>>                    mMessageRef;
            ::ll::TypedStorage<8, 8, ::Bedrock::StaticOptimizedString>                    mMessageStr;
            ::ll::TypedStorage<8, 8, ::gsl::not_null<const ContentLog::ContentLogScope*>> mContentLogScope;
            // NOLINTEND

        public:
            // prevent constructor by default
            ScopeData& operator=(ScopeData const&);
            ScopeData();
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::vector<ContentLog::ThreadSpecificData::ScopeData>> mScope;
        ::ll::TypedStorage<8, 24, std::vector<ContextMessageLogger*>>                     mMessageLoggers;
        // NOLINTEND
    };

    class ContentLogScope {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>                                     mPopScope;
        ::ll::TypedStorage<8, 16, std::weak_ptr<ContentLog::ScopeHandler>> mScopeHandler;
        // NOLINTEND

    public:
        // prevent constructor by default
        ContentLogScope();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI explicit ContentLogScope(::Bedrock::StaticOptimizedString const&);

        MCNAPI explicit ContentLogScope(std::string_view);

        MCNAPI ContentLogScope(std::optional<std::string_view>, ::Bedrock::StaticOptimizedString const&);

        MCNAPI ~ContentLogScope();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::Bedrock::StaticOptimizedString const&);

        MCNAPI void* $ctor(std::string_view);

        MCNAPI void* $ctor(std::optional<std::string_view>, ::Bedrock::StaticOptimizedString const&);
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
    // clang-format off
    ::ll::TypedStorage<1, 1, bool> mEnabled;
    ::ll::UntypedStorage<8, 24> mEndPoints;
    ::ll::TypedStorage<4, 40, std::mutex> mEndpointMutex;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ContentLog::ScopeHandler>> mScopeHandler;
    ::ll::TypedStorage<8, 40, std::unordered_map<LogLevel, std::unordered_map<LogArea, std::unordered_set<ulong>>>> mOnceOnlyMessages;
    // clang-format on
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ContentLog();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ContentLog();

    MCNAPI void _writeToLog(bool const, ::LogArea const, ::LogLevel const, ::__va_list&);

    MCNAPI void flush();

    MCNAPI bool isEnabled() const;

    MCNAPI void log(bool const, ::LogLevel const, ::LogArea const);

    MCNAPI void popThreadSpecificMessageLogger();

    MCNAPI void pushThreadSpecificMessageLogger(::ContextMessageLogger*);

    MCNAPI void registerEndPoint(::Bedrock::typeid_t<ContentLog>, ::gsl::not_null<ContentLogEndPoint*>);

    MCNAPI void unregisterEndPoint(::gsl::not_null<ContentLogEndPoint*> const);

    MCNAPI void updateEnabledStatus();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static char const* getLogAreaName(::LogArea);

    MCNAPI static char const* getLogLevelName(::LogLevel);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
