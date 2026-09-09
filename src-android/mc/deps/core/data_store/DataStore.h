#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/Path.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/SharedRecursiveMutex.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/json_object/Document.h"
#include "mc/deps/core/utility/json_object/MutableObjectHelper.h"
#include "mc/platform/brstd/copyable_function.h"
#include "mc/platform/threading/LockGuard.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::JSONObject { class ArrayNode; }
namespace Bedrock::JSONObject { class Node; }
namespace Bedrock::JSONObject { class ObjectNode; }
namespace Bedrock::JSONObject { class ValueWrapper; }
// clang-format on

namespace Bedrock {

class DataStore : public ::Bedrock::EnableNonOwnerReferences {
public:
    // DataStore inner types declare
    // clang-format off
    class Viewer;
    struct CustomFileHandlers;
    template<typename T0, typename T1> class AccessHandle;
    class ViewerImpl;
    class Editor;
    class EditorImpl;
    class Impl;
    // clang-format on

    // DataStore inner types define
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

    struct CustomFileHandlers {
    public:
        // CustomFileHandlers inner types define
        using SaveFn = ::brstd::copyable_function<void(const Core::Path&, std::string_view)>;

        using LoadFn = ::brstd::copyable_function<std::optional<std::string>(const Core::Path&)>;

        using DeleteFn = ::brstd::copyable_function<void(const Core::Path&)>;

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 64> mSaveFn;
        ::ll::UntypedStorage<8, 64> mLoadFn;
        ::ll::UntypedStorage<8, 64> mDeleteFn;
        // NOLINTEND

    public:
        // prevent constructor by default
        CustomFileHandlers& operator=(CustomFileHandlers const&);
        CustomFileHandlers(CustomFileHandlers const&);

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

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~ViewerImpl();

        virtual ::gsl::not_null<Bedrock::DataStore*> getOwningDataStore();

        virtual ::gsl::not_null<const Bedrock::DataStore*> getOwningDataStore() const;

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
        // NOLINTEND
    };

    class Editor : public ::Bedrock::DataStore::Viewer {
    public:
        // virtual functions
        // NOLINTBEGIN
        // clang-format off
        virtual ::Bedrock::JSONObject::Node* getValueForKey(std::string_view) = 0;
    
        virtual ::Bedrock::JSONObject::Node* setValueForKey(std::string_view, ::Bedrock::JSONObject::ValueWrapper const&) = 0;
        // clang-format on
        // NOLINTEND
    };

    class EditorImpl : public ::Bedrock::DataStore::Editor {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::gsl::not_null<Bedrock::DataStore::Impl*>> mOwner;
        ::ll::TypedStorage<1, 1, bool>                                       mDirty;
        // NOLINTEND

    public:
        // prevent constructor by default
        EditorImpl();

    public:
        // virtual functions
        // NOLINTBEGIN
        // clang-format off
        virtual ~EditorImpl();
    
        virtual ::gsl::not_null<Bedrock::DataStore*> getOwningDataStore();
    
        virtual ::gsl::not_null<const Bedrock::DataStore*> getOwningDataStore() const;
    
        virtual ::Bedrock::JSONObject::Node* getValueForKey(std::string_view);
    
        virtual ::Bedrock::JSONObject::Node const* getValueForKey(std::string_view) const;
    
        virtual ::Bedrock::JSONObject::Node* setValueForKey(std::string_view, ::Bedrock::JSONObject::ValueWrapper const&);
        // clang-format on
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

        MCNAPI ::Bedrock::JSONObject::Node* $getValueForKey(std::string_view);

        MCNAPI ::Bedrock::JSONObject::Node const* $getValueForKey(std::string_view) const;

        MCNAPI ::Bedrock::JSONObject::Node*
        $setValueForKey(std::string_view, ::Bedrock::JSONObject::ValueWrapper const&);
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

    class Impl {
    public:
        // Impl inner types define
        using MutexType = ::Bedrock::Threading::SharedRecursiveMutex;

        using LockType = ::Bedrock::Threading::LockGuard<Bedrock::Threading::SharedRecursiveMutex>;

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::gsl::not_null<Bedrock::DataStore*>>       mOwner;
        ::ll::UntypedStorage<8, 184>                                         mMutex;
        ::ll::UntypedStorage<8, 32>                                          mFilePath;
        ::ll::TypedStorage<8, 192, ::Bedrock::DataStore::CustomFileHandlers> mFileHandlers;
        ::ll::TypedStorage<8, 88, ::Bedrock::JSONObject::Document>           mDocument;
        ::ll::TypedStorage<8, 8, ::Bedrock::JSONObject::ObjectNode*>         mRootObject;
        ::ll::UntypedStorage<8, 32>                                          mObjectHelper;
        ::ll::TypedStorage<8, 16, ::Bedrock::DataStore::ViewerImpl>          mViewer;
        ::ll::UntypedStorage<8, 32>                                          mEditor;
        // NOLINTEND

    public:
        // prevent constructor by default
        Impl();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI explicit Impl(::Bedrock::DataStore*);

        MCNAPI ::Bedrock::JSONObject::Node* _getValueForKey(char const*, ulong);

        MCNAPI void load();

        MCNAPI void save();

        MCNAPI ~Impl();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::Bedrock::DataStore*);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    using ViewerHandle = ::Bedrock::DataStore::AccessHandle<Bedrock::DataStore::Viewer, Bedrock::DataStore::ViewerImpl>;

    using EditorHandle = ::Bedrock::DataStore::AccessHandle<Bedrock::DataStore::Editor, Bedrock::DataStore::EditorImpl>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<Bedrock::DataStore::Impl>> mImpl;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DataStore();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DataStore();

    MCNAPI ::Bedrock::DataStore::AccessHandle<Bedrock::DataStore::Editor, Bedrock::DataStore::EditorImpl> edit();

    MCNAPI void load();

    MCNAPI void save();

    MCNAPI void setCustomFileHandlers(::Bedrock::DataStore::CustomFileHandlers);

    MCNAPI void setFilePath(::Core::Path const&);

    MCNAPI ::Bedrock::DataStore::AccessHandle<Bedrock::DataStore::Viewer, Bedrock::DataStore::ViewerImpl> view();
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
