#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "cstdarg"
#include "mc/deps/core/debug/log/ContextMessageLogger.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/debug/log/LogArea.h"
#include "mc/deps/core/debug/log/LogLevel.h"
#include "mc/deps/core/string/StaticOptimizedString.h"
#include "mc/deps/core/threading/InstancedThreadLocal.h"
#include "mc/deps/core/utility/DisableServiceLocatorOverride.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/typeid_t.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/diagnostics/LogAreaID.h"
#else // @header-generator platform
#include "mc/platform/threading/Mutex.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class ContentLogEndPoint;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class ContextMessageLogger;
#endif // @header-generator platform
// clang-format on

class ContentLog : public ::Bedrock::EnableNonOwnerReferences, public ::DisableServiceLocatorOverride {
public:
    // ContentLog inner types declare
    // clang-format off
    class ContentLogEndPointData;
#if defined(LL_PLAT_A) // @header-generator platform
    class ScopeHandler;
#else // @header-generator platform
#endif // @header-generator platform
    class ThreadSpecificData;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    class ScopeHandler;
#endif // @header-generator platform
    class ContentLogScope;
    // clang-format on

    // ContentLog inner types define
    class ContentLogEndPointData {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
        ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ContentLogEndPoint>> mContentLogEndPoint;
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
            ::ll::TypedStorage<8, 24, std::optional<std::string_view>>                    mMessageRef;
            ::ll::TypedStorage<8, 8, ::Bedrock::StaticOptimizedString>                    mMessageStr;
            ::ll::TypedStorage<8, 8, ::gsl::not_null<const ContentLog::ContentLogScope*>> mContentLogScope;
#else // @header-generator platform
            ::ll::TypedStorage<8, 24, ::std::optional<::std::string_view>>                  mMessageRef;
            ::ll::TypedStorage<8, 8, ::Bedrock::StaticOptimizedString>                      mMessageStr;
            ::ll::TypedStorage<8, 8, ::gsl::not_null<::ContentLog::ContentLogScope const*>> mContentLogScope;
#endif // @header-generator platform
            // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

        public:
            // prevent constructor by default
            ScopeData& operator=(ScopeData const&);
            ScopeData();
#else // @header-generator platform
#endif // @header-generator platform
        };

    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::vector<ContentLog::ThreadSpecificData::ScopeData>> mScope;
        ::ll::TypedStorage<8, 24, std::vector<ContextMessageLogger*>>                     mMessageLoggers;
#else // @header-generator platform
        ::ll::TypedStorage<8, 24, ::std::vector<::ContentLog::ThreadSpecificData::ScopeData>> mScope;
        ::ll::TypedStorage<8, 24, ::std::vector<::ContextMessageLogger*>>                     mMessageLoggers;
        // NOLINTEND
    };

    class ScopeHandler : public ::std::enable_shared_from_this<::ContentLog::ScopeHandler> {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<
            8,
            168,
            ::Bedrock::Threading::InstancedThreadLocal<
                ::ContentLog::ThreadSpecificData,
                ::std::allocator<::ContentLog::ThreadSpecificData>>>
            mThreadSpecificData;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::std::string getScope();
#endif // @header-generator platform
        // NOLINTEND
    };

    class ContentLogScope {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<1, 1, bool>                                     mPopScope;
        ::ll::TypedStorage<8, 16, std::weak_ptr<ContentLog::ScopeHandler>> mScopeHandler;
#else // @header-generator platform
        ::ll::TypedStorage<1, 1, bool>                                         mPopScope;
        ::ll::TypedStorage<8, 16, ::std::weak_ptr<::ContentLog::ScopeHandler>> mScopeHandler;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        ContentLogScope();

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI explicit ContentLogScope(::Bedrock::StaticOptimizedString const&);
#else // @header-generator platform
        MCNAPI explicit ContentLogScope(::std::string_view scope);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI explicit ContentLogScope(std::string_view);

        MCNAPI ContentLogScope(std::optional<std::string_view>, ::Bedrock::StaticOptimizedString const&);
#else // @header-generator platform
        MCNAPI ContentLogScope(::std::optional<::std::string_view> ref, ::Bedrock::StaticOptimizedString const& str);
#endif // @header-generator platform

        MCNAPI ~ContentLogScope();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void* $ctor(::Bedrock::StaticOptimizedString const&);
#else // @header-generator platform
        MCNAPI void* $ctor(::std::string_view scope);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void* $ctor(std::string_view);

        MCNAPI void* $ctor(std::optional<std::string_view>, ::Bedrock::StaticOptimizedString const&);
#else // @header-generator platform
        MCNAPI void* $ctor(::std::optional<::std::string_view> ref, ::Bedrock::StaticOptimizedString const& str);
#endif // @header-generator platform
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    using ScopeHandler = ::ContentLog::ScopeHandler;

#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, bool> mEnabled;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24> mEndPoints;
    ::ll::TypedStorage<4, 40, std::mutex> mEndpointMutex;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ContentLog::ScopeHandler>> mScopeHandler;
    ::ll::TypedStorage<8, 40, std::unordered_map<LogLevel, std::unordered_map<LogArea, std::unordered_set<ulong>>>> mOnceOnlyMessages;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::std::map<::Bedrock::typeid_t<::ContentLog>, ::ContentLog::ContentLogEndPointData>>
                                                                             mEndPoints;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>                   mEndpointMutex;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ContentLog::ScopeHandler>> mScopeHandler;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::LogLevel, ::std::unordered_map<::LogArea, ::std::unordered_set<uint64>>>>
        mOnceOnlyMessages;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ContentLog();
#else // @header-generator platform
    virtual ~ContentLog() /*override*/ = default;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ContentLog();
#else // @header-generator platform
    MCAPI ContentLog();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _writeToLog(bool const, ::LogArea const, ::LogLevel const, ::__va_list&);
#else // @header-generator platform
    MCAPI void _writeToLog(bool logOnlyOnce, ::LogArea area, ::LogLevel level, char*& args);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void flush();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void flush();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isEnabled() const;
#else // @header-generator platform
    MCAPI void log(bool logOnlyOnce, ::LogLevel level, ::LogArea area, ...);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void log(bool const, ::LogLevel const, ::LogArea const);
#else // @header-generator platform
    MCAPI void registerEndPoint(::Bedrock::typeid_t<::ContentLog> id, ::gsl::not_null<::ContentLogEndPoint*> endPoint);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void popThreadSpecificMessageLogger();
#else // @header-generator platform
    MCAPI void unregisterEndPoint(::gsl::not_null<::ContentLogEndPoint*> endPoint);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void updateEnabledStatus();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
