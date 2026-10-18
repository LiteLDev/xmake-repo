#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/platform/threading/Mutex.h"
#endif // @header-generator platform
#include "mc/world/level/storage/db_helpers/Category.h"

// auto generated forward declare list
// clang-format off
class LevelStorage;
// clang-format on

class LevelStorageWriteBatch {
public:
    // LevelStorageWriteBatch inner types declare
    // clang-format off
    struct BatchEntry;
    class PerfContext;
    // clang-format on

    // LevelStorageWriteBatch inner types define
    struct BatchEntry {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 16, std::shared_ptr<std::string>> mLatestValue;
        ::ll::TypedStorage<1, 1, bool>                          mDeleted;
        ::ll::TypedStorage<4, 4, ::DBHelpers::Category>         mCategory;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~BatchEntry();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
#else // @header-generator platform
        ::ll::TypedStorage<8, 16, ::std::shared_ptr<::std::string>> mLatestValue;
        ::ll::TypedStorage<1, 1, bool>                              mDeleted;
        ::ll::TypedStorage<4, 4, ::DBHelpers::Category>             mCategory;
#endif // @header-generator platform
        // NOLINTEND
    };

    class PerfContext {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, ulong>        mOperation;
        ::ll::TypedStorage<8, 8, ulong>        mSize;
        ::ll::TypedStorage<8, 24, std::string> mKey;
        ::ll::TypedStorage<8, 8, char const*>  mReason;
#else // @header-generator platform
        ::ll::TypedStorage<8, 8, uint64>         mOperation;
        ::ll::TypedStorage<8, 8, uint64>         mSize;
        ::ll::TypedStorage<8, 32, ::std::string> mKey;
        ::ll::TypedStorage<8, 8, char const*>    mReason;
#endif // @header-generator platform
        // NOLINTEND
    };

#if defined(LL_PLAT_A) // @header-generator platform
    using BatchContainerType = std::map<std::string, LevelStorageWriteBatch::BatchEntry>;
#else // @header-generator platform
    using BatchContainerType = ::std::map<::std::string, ::LevelStorageWriteBatch::BatchEntry>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using iterator = std::__map_iterator<std::__tree_iterator<
        std::__value_type<std::string, LevelStorageWriteBatch::BatchEntry>,
        std::__tree_node<std::__value_type<std::string, LevelStorageWriteBatch::BatchEntry>, void*>*,
        long>>;
#else // @header-generator platform
    using const_iterator = ::std::_Tree_const_iterator<::std::_Tree_val<
        ::std::_Tree_simple_types<::std::pair<::std::string const, ::LevelStorageWriteBatch::BatchEntry>>>>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using const_iterator = std::__map_const_iterator<std::__tree_const_iterator<
        std::__value_type<std::string, LevelStorageWriteBatch::BatchEntry>,
        std::__tree_node<std::__value_type<std::string, LevelStorageWriteBatch::BatchEntry>, void*>*,
        long>>;
#else // @header-generator platform
    using iterator = ::std::_Tree_iterator<::std::_Tree_val<
        ::std::_Tree_simple_types<::std::pair<::std::string const, ::LevelStorageWriteBatch::BatchEntry>>>>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<std::function<void()>>>                        mFlushCallbacks;
    ::ll::TypedStorage<8, 24, std::map<std::string, LevelStorageWriteBatch::BatchEntry>> mBatch;
    ::ll::TypedStorage<4, 40, std::mutex>                                                mFlushCallbacksMutex;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::std::function<void()>>>                          mFlushCallbacks;
    ::ll::TypedStorage<8, 16, ::std::map<::std::string, ::LevelStorageWriteBatch::BatchEntry>> mBatch;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>                                     mFlushCallbacksMutex;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    LevelStorageWriteBatch& operator=(LevelStorageWriteBatch const&);
    LevelStorageWriteBatch(LevelStorageWriteBatch const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LevelStorageWriteBatch();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void putKey(std::string const&, std::shared_ptr<std::string>, ::DBHelpers::Category);
#else // @header-generator platform
    virtual void putKey(::std::string const& key, ::std::string_view data, ::DBHelpers::Category category);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void putKey(std::string const&, std::string&&, ::DBHelpers::Category);
#else // @header-generator platform
    virtual void putKey(::std::string const& key, ::std::string const& data, ::DBHelpers::Category category);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void putKey(std::string const&, std::string const&, ::DBHelpers::Category);
#else // @header-generator platform
    virtual void putKey(::std::string const& key, ::std::string&& data, ::DBHelpers::Category category);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void putKey(std::string const&, std::string_view, ::DBHelpers::Category);
#else // @header-generator platform
    virtual void
    putKey(::std::string const& key, ::std::shared_ptr<::std::string> data, ::DBHelpers::Category category);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void deleteKey(std::string const&, ::DBHelpers::Category);
#else // @header-generator platform
    virtual void deleteKey(::std::string const& key, ::DBHelpers::Category category);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void flush(::LevelStorage&);
#else // @header-generator platform
    virtual void flush(::LevelStorage& db);
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _writeKey(std::string const&, std::shared_ptr<std::string>&&, ::DBHelpers::Category);
#else // @header-generator platform
    MCAPI void
    _writeKey(::std::string const& key, ::std::shared_ptr<::std::string>&& data, ::DBHelpers::Category category);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addFlushCallback(std::function<void()>);
#else // @header-generator platform
    MCAPI void addFlushCallback(::std::function<void()> callback);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void clear();

    MCNAPI void erase(
        std::__map_const_iterator<std::__tree_const_iterator<
            std::__value_type<std::string, LevelStorageWriteBatch::BatchEntry>,
            std::__tree_node<std::__value_type<std::string, LevelStorageWriteBatch::BatchEntry>, void*>*,
            long>> const&
    );

    MCNAPI std::__map_const_iterator<std::__tree_const_iterator<
        std::__value_type<std::string, LevelStorageWriteBatch::BatchEntry>,
        std::__tree_node<std::__value_type<std::string, LevelStorageWriteBatch::BatchEntry>, void*>*,
        long>>
           find(std::string const&) const;

    MCNAPI std::__map_iterator<std::__tree_iterator<
        std::__value_type<std::string, LevelStorageWriteBatch::BatchEntry>,
        std::__tree_node<std::__value_type<std::string, LevelStorageWriteBatch::BatchEntry>, void*>*,
        long>>
           find(std::string const&);
#else // @header-generator platform
    MCAPI void clear();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $putKey(std::string const&, std::shared_ptr<std::string>, ::DBHelpers::Category);
#else // @header-generator platform
    MCAPI void $putKey(::std::string const& key, ::std::string_view data, ::DBHelpers::Category category);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $putKey(std::string const&, std::string&&, ::DBHelpers::Category);
#else // @header-generator platform
    MCAPI void $putKey(::std::string const& key, ::std::string const& data, ::DBHelpers::Category category);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $putKey(std::string const&, std::string const&, ::DBHelpers::Category);
#else // @header-generator platform
    MCAPI void $putKey(::std::string const& key, ::std::string&& data, ::DBHelpers::Category category);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $putKey(std::string const&, std::string_view, ::DBHelpers::Category);
#else // @header-generator platform
    MCAPI void $putKey(::std::string const& key, ::std::shared_ptr<::std::string> data, ::DBHelpers::Category category);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $deleteKey(std::string const&, ::DBHelpers::Category);
#else // @header-generator platform
    MCAPI void $deleteKey(::std::string const& key, ::DBHelpers::Category category);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $flush(::LevelStorage&);
#else // @header-generator platform
    MCAPI void $flush(::LevelStorage& db);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};
