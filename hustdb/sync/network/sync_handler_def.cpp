////////////////////////////////////////////////////////////////////////////////
// NOTE : Generated by libevhtp.py. It is NOT supposed to modify this file.
////////////////////////////////////////////////////////////////////////////////
#include "sync_handler_def.h"

sync_status_ctx_t::sync_status_ctx_t(evhtp_query_t * htp_query)
{
    // reset
    has_backend_count = false;

    memset(&backend_count, 0, sizeof(uint32_t));

    if (!htp_query)
    {
        return;
    }
    // parse from htp_query
    evhtp_kv_s * kv = htp_query->tqh_first;
    while (kv)
    {
        static evhtp::c_str_t __backend_count = evhtp_make_str("backend_count");

        if (kv->klen == __backend_count.len && 0 == strncmp(__backend_count.data, kv->key, kv->klen) && kv->val && kv->vlen > 0)
        {
            has_backend_count = true;
            backend_count = evhtp::cast <uint32_t> (std::string(kv->val, kv->vlen));
        }
        kv = kv->next.tqe_next;
    }
}
