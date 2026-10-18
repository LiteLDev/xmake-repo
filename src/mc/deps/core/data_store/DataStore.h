#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/file/Path.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/SharedRecursiveMutex.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/json_object/Document.h"
#include "mc/deps/core/utility/json_object/MutableObjectHelper.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/platform/brstd/copyable_function.h"
#include "mc/platform/threading/LockGuard.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/platform/threading/SharedLock.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace Bedrock::JSONObject { class ArrayNode; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Bedrock::JSONObject { class Node; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Bedrock::JSONObject { class ObjectNode; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Bedrock::JSONObject { class ValueWrapper; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace Bedrock::Threading { class SharedRecursiveMutex; }
namespace Core { class Path; }
#endif // @header-generator platform
// clang-format on

namespace Bedrock {

class DataStore : public ::Bedrock::EnableNonOwnerReferences {
public:
    // DataStore inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    class Viewer;
#else // @header-generator platform
#endif // @header-generator platform
    struct CustomFileHandlers;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    class Viewer;
#endif // @header-generator platform
    template<typename T0, typename T1> class AccessHandle;
#if defined(LL_PLAT_A) // @header-generator platform
    class ViewerImpl;
#else // @header-generator platform
#endif // @header-generator platform
    class Editor;
    class EditorImpl;
    class Impl;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    class ViewerImpl;
#endif // @header-generator platform
    // clang-format on

    // DataStore inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    class Viewer {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~Viewer();

        virtual ::gsl::not_null<Bedrock::DataStore*> getOwningDataStore() = 0;

        virtual ::gsl::not_null<const Bedrock::DataStore*> getOwningDataStore() const = 0;

        virtual ::Bedrock::JSONObject::Node const* getValueForKey(std::string_view) const = 0;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI bool getBooleanKey(std::string_view, bool) const;

        MCNAPI int getSInt32Key(std::string_view, int) const;
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

#else // @header-generator platform
#endif // @header-generator platform
    struct CustomFileHandlers {
#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // CustomFileHandlers inner types define
        using SaveFn = ::brstd::copyable_function<void(const Core::Path&, std::string_view)>;

        using LoadFn = ::brstd::copyable_function<std::optional<std::string>(const Core::Path&)>;

        using DeleteFn = ::brstd::copyable_function<void(const Core::Path&)>;

#else // @header-generator platform
#endif // @header-generator platform
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<8, 64> mSaveFn;
        ::ll::UntypedStorage<8, 64> mLoadFn;
        ::ll::UntypedStorage<8, 64> mDeleteFn;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 64> mUnk28b7e8;
        ::ll::UntypedStorage<8, 64> mUnk8d9397;
        ::ll::UntypedStorage<8, 64> mUnk216882;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        CustomFileHandlers& operator=(CustomFileHandlers const&);
        CustomFileHandlers(CustomFileHandlers const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
        CustomFileHandlers();
#endif // @header-generator platform

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~CustomFileHandlers();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

#if defined(LL_PLAT_A) // @header-generator platform
    template <typename T0, typename T1>
    class AccessHandle {};

    class ViewerImpl : public ::Bedrock::DataStore::Viewer {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::gsl::not_null<Bedrock::DataStore::Impl*>> mOwner;
        // NOLINTEND

    public:
        // prevent constructor by default
        ViewerImpl();

#else // @header-generator platform
    class Viewer {
#endif // @header-generator platform
    public:
        // virtual functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        virtual ~ViewerImpl();
#else // @header-generator platform
        virtual ~Viewer() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        virtual ::gsl::not_null<Bedrock::DataStore*> getOwningDataStore();
#else // @header-generator platform
        virtual ::gsl::not_null<::Bedrock::DataStore const*> getOwningDataStore() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        virtual ::gsl::not_null<const Bedrock::DataStore*> getOwningDataStore() const;
#else // @header-generator platform
        virtual ::gsl::not_null<::Bedrock::DataStore*> getOwningDataStore() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        virtual ::Bedrock::JSONObject::Node const* getValueForKey(std::string_view) const;
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI ::gsl::not_null<Bedrock::DataStore*> $getOwningDataStore();

        MCNAPI ::gsl::not_null<const Bedrock::DataStore*> $getOwningDataStore() const;

        MCNAPI ::Bedrock::JSONObject::Node const* $getValueForKey(std::string_view) const;
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
#else // @header-generator platform
        virtual ::Bedrock::JSONObject::Node const* getValueForKey(::std::string_view key) const = 0;
#endif // @header-generator platform
        // NOLINTEND
    };
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    template <typename T0, typename T1>
    class AccessHandle {};
#endif // @header-generator platform

    class Editor : public ::Bedrock::DataStore::Viewer {
    public:
        // virtual functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        // clang-format off
        virtual ::Bedrock::JSONObject::Node* getValueForKey(std::string_view) = 0;
    
        virtual ::Bedrock::JSONObject::Node* setValueForKey(std::string_view, ::Bedrock::JSONObject::ValueWrapper const&) = 0;
        // clang-format on
#else // @header-generator platform
        virtual ::Bedrock::JSONObject::Node* getValueForKey(::std::string_view key) = 0;

        virtual ::Bedrock::JSONObject::Node*
        setValueForKey(::std::string_view key, ::Bedrock::JSONObject::ValueWrapper const& value) = 0;
#endif // @header-generator platform
        // NOLINTEND
    };

    class EditorImpl : public ::Bedrock::DataStore::Editor {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, ::gsl::not_null<Bedrock::DataStore::Impl*>> mOwner;
        ::ll::TypedStorage<1, 1, bool>                                       mDirty;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 8> mUnkeff452;
        ::ll::UntypedStorage<1, 1> mUnke53327;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
        EditorImpl& operator=(EditorImpl const&);
        EditorImpl(EditorImpl const&);
#endif // @header-generator platform
        EditorImpl();

    public:
        // virtual functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        // clang-format off
        virtual ~EditorImpl();
    
        virtual ::gsl::not_null<Bedrock::DataStore*> getOwningDataStore();
    
        virtual ::gsl::not_null<const Bedrock::DataStore*> getOwningDataStore() const;
    
        virtual ::Bedrock::JSONObject::Node* getValueForKey(std::string_view);
    
        virtual ::Bedrock::JSONObject::Node const* getValueForKey(std::string_view) const;
    
        virtual ::Bedrock::JSONObject::Node* setValueForKey(std::string_view, ::Bedrock::JSONObject::ValueWrapper const&);
        // clang-format on
        // NOLINTEND
#else // @header-generator platform
        virtual ~EditorImpl() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
#else // @header-generator platform
        virtual ::gsl::not_null<::Bedrock::DataStore const*> getOwningDataStore() const /*override*/;

        virtual ::gsl::not_null<::Bedrock::DataStore*> getOwningDataStore() /*override*/;

        virtual ::Bedrock::JSONObject::Node const* getValueForKey(::std::string_view key) const /*override*/;

        virtual ::Bedrock::JSONObject::Node* getValueForKey(::std::string_view key) /*override*/;

        virtual ::Bedrock::JSONObject::Node*
        setValueForKey(::std::string_view key, ::Bedrock::JSONObject::ValueWrapper const& value) /*override*/;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ::gsl::not_null<Bedrock::DataStore*> $getOwningDataStore();
#else // @header-generator platform
        MCNAPI ::gsl::not_null<::Bedrock::DataStore const*> $getOwningDataStore() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ::gsl::not_null<const Bedrock::DataStore*> $getOwningDataStore() const;
#else // @header-generator platform
        MCNAPI ::gsl::not_null<::Bedrock::DataStore*> $getOwningDataStore();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ::Bedrock::JSONObject::Node* $getValueForKey(std::string_view);
#else // @header-generator platform
        MCNAPI ::Bedrock::JSONObject::Node const* $getValueForKey(::std::string_view key) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ::Bedrock::JSONObject::Node const* $getValueForKey(std::string_view) const;
#else // @header-generator platform
        MCNAPI ::Bedrock::JSONObject::Node* $getValueForKey(::std::string_view key);
#endif // @header-generator platform

        MCNAPI ::Bedrock::JSONObject::Node*
#if defined(LL_PLAT_A) // @header-generator platform
        $setValueForKey(std::string_view, ::Bedrock::JSONObject::ValueWrapper const&);
        // NOLINTEND
#else // @header-generator platform
        $setValueForKey(::std::string_view key, ::Bedrock::JSONObject::ValueWrapper const& value);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
        // NOLINTEND
    };

    class Impl {
    public:
#if defined(LL_PLAT_A) // @header-generator platform
        // Impl inner types define
        using MutexType = ::Bedrock::Threading::SharedRecursiveMutex;

        using LockType = ::Bedrock::Threading::LockGuard<Bedrock::Threading::SharedRecursiveMutex>;

    public:
#else // @header-generator platform
#endif // @header-generator platform
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, ::gsl::not_null<Bedrock::DataStore*>>       mOwner;
        ::ll::UntypedStorage<8, 184>                                         mMutex;
        ::ll::UntypedStorage<8, 32>                                          mFilePath;
        ::ll::TypedStorage<8, 192, ::Bedrock::DataStore::CustomFileHandlers> mFileHandlers;
        ::ll::TypedStorage<8, 88, ::Bedrock::JSONObject::Document>           mDocument;
        ::ll::TypedStorage<8, 8, ::Bedrock::JSONObject::ObjectNode*>         mRootObject;
        ::ll::UntypedStorage<8, 32>                                          mObjectHelper;
        ::ll::TypedStorage<8, 16, ::Bedrock::DataStore::ViewerImpl>          mViewer;
        ::ll::UntypedStorage<8, 32>                                          mEditor;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 8>   mUnk36485c;
        ::ll::UntypedStorage<8, 40>  mUnk7c4cd3;
        ::ll::UntypedStorage<8, 32>  mUnk5d9472;
        ::ll::UntypedStorage<8, 192> mUnkbf5d9d;
        ::ll::UntypedStorage<8, 88>  mUnka2b527;
        ::ll::UntypedStorage<8, 8>   mUnkb96eba;
        ::ll::UntypedStorage<8, 24>  mUnk6aa7f3;
        ::ll::UntypedStorage<8, 16>  mUnk431661;
        ::ll::UntypedStorage<8, 24>  mUnk71a5a1;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
        Impl& operator=(Impl const&);
        Impl(Impl const&);
#endif // @header-generator platform
        Impl();

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI explicit Impl(::Bedrock::DataStore*);
#else // @header-generator platform
        MCNAPI explicit Impl(::Bedrock::DataStore* owner);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ::Bedrock::JSONObject::Node* _getValueForKey(char const*, ulong);
#else // @header-generator platform
        MCNAPI ::Bedrock::JSONObject::Node* _getValueForKey(char const* key, uint64 keyLength);
#endif // @header-generator platform

        MCNAPI void load();

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void save();
#else // @header-generator platform
#ifdef LL_PLAT_C
        MCNAPI void save();
#endif

        MCNAPI void setCustomFileHandlers(::Bedrock::DataStore::CustomFileHandlers handlers);
#endif // @header-generator platform

        MCNAPI ~Impl();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void* $ctor(::Bedrock::DataStore*);
#else // @header-generator platform
        MCNAPI void* $ctor(::Bedrock::DataStore* owner);
#endif // @header-generator platform
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

#if defined(LL_PLAT_A) // @header-generator platform
    using ViewerHandle = ::Bedrock::DataStore::AccessHandle<Bedrock::DataStore::Viewer, Bedrock::DataStore::ViewerImpl>;
#else // @header-generator platform
    class ViewerImpl : public ::Bedrock::DataStore::Viewer {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk42e070;
        // NOLINTEND
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using EditorHandle = ::Bedrock::DataStore::AccessHandle<Bedrock::DataStore::Editor, Bedrock::DataStore::EditorImpl>;
#else // @header-generator platform
    public:
        // prevent constructor by default
        ViewerImpl& operator=(ViewerImpl const&);
        ViewerImpl(ViewerImpl const&);
        ViewerImpl();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ::gsl::not_null<::Bedrock::DataStore const*> getOwningDataStore() const /*override*/;

        virtual ::gsl::not_null<::Bedrock::DataStore*> getOwningDataStore() /*override*/;

        virtual ::Bedrock::JSONObject::Node const* getValueForKey(::std::string_view key) const /*override*/;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI ::gsl::not_null<::Bedrock::DataStore const*> $getOwningDataStore() const;

        MCNAPI ::gsl::not_null<::Bedrock::DataStore*> $getOwningDataStore();

        MCNAPI ::Bedrock::JSONObject::Node const* $getValueForKey(::std::string_view key) const;


        // NOLINTEND
    };
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<Bedrock::DataStore::Impl>> mImpl;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk837080;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    DataStore& operator=(DataStore const&);
    DataStore(DataStore const&);
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~DataStore();
#else // @header-generator platform
    virtual ~DataStore() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DataStore();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::DataStore::AccessHandle<Bedrock::DataStore::Editor, Bedrock::DataStore::EditorImpl> edit();

    MCNAPI void load();

    MCNAPI void save();

    MCNAPI void setCustomFileHandlers(::Bedrock::DataStore::CustomFileHandlers);

    MCNAPI void setFilePath(::Core::Path const&);

    MCNAPI ::Bedrock::DataStore::AccessHandle<Bedrock::DataStore::Viewer, Bedrock::DataStore::ViewerImpl> view();
#else // @header-generator platform
    MCNAPI void setCustomFileHandlers(::Bedrock::DataStore::CustomFileHandlers handlers);
#endif // @header-generator platform
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

} // namespace Bedrock
