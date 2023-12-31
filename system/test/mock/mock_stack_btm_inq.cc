/*
 * Copyright 2020 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*
 * Generated mock file from original source file
 *   Functions generated:44
 */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <map>
#include <string>

#include "advertise_data_parser.h"
#include "btm_api.h"
#include "common/time_util.h"
#include "device/include/controller.h"
#include "main/shim/btm_api.h"
#include "main/shim/shim.h"
#include "osi/include/log.h"
#include "osi/include/osi.h"
#include "stack/btm/btm_ble_int.h"
#include "stack/btm/btm_int_types.h"
#include "stack/include/acl_api.h"
#include "stack/include/bt_hdr.h"
#include "stack/include/btm_ble_api.h"
#include "stack/include/inq_hci_link_interface.h"
#include "test/common/mock_functions.h"
#include "types/bluetooth/uuid.h"
#include "types/raw_address.h"

#ifndef UNUSED_ATTR
#define UNUSED_ATTR
#endif

void SendRemoteNameRequest(const RawAddress& raw_address) {
  inc_func_call_count(__func__);
}
bool BTM_HasEirService(const uint32_t* p_eir_uuid, uint16_t uuid16) {
  inc_func_call_count(__func__);
  return false;
}
bool btm_inq_find_bdaddr(const RawAddress& p_bda) {
  inc_func_call_count(__func__);
  return false;
}
tBTM_EIR_SEARCH_RESULT BTM_HasInquiryEirService(tBTM_INQ_RESULTS* p_results,
                                                uint16_t uuid16) {
  inc_func_call_count(__func__);
  return 0;
}
tBTM_INQ_INFO* BTM_InqDbFirst(void) {
  inc_func_call_count(__func__);
  return nullptr;
}
tBTM_INQ_INFO* BTM_InqDbNext(tBTM_INQ_INFO* p_cur) {
  inc_func_call_count(__func__);
  return nullptr;
}
tBTM_INQ_INFO* BTM_InqDbRead(const RawAddress& p_bda) {
  inc_func_call_count(__func__);
  return nullptr;
}
tBTM_STATUS BTM_CancelRemoteDeviceName(void) {
  inc_func_call_count(__func__);
  return BTM_SUCCESS;
}
tBTM_STATUS BTM_ClearInqDb(const RawAddress* p_bda) {
  inc_func_call_count(__func__);
  return BTM_SUCCESS;
}
tBTM_STATUS BTM_ReadRemoteDeviceName(const RawAddress& remote_bda,
                                     tBTM_NAME_CMPL_CB* p_cb,
                                     tBT_TRANSPORT transport) {
  inc_func_call_count(__func__);
  return BTM_SUCCESS;
}
tBTM_STATUS BTM_SetConnectability(uint16_t page_mode) {
  inc_func_call_count(__func__);
  return BTM_SUCCESS;
}
tBTM_STATUS BTM_SetDiscoverability(uint16_t inq_mode) {
  inc_func_call_count(__func__);
  return BTM_SUCCESS;
}
tBTM_STATUS BTM_SetInquiryMode(uint8_t mode) {
  inc_func_call_count(__func__);
  return BTM_SUCCESS;
}
tBTM_STATUS BTM_StartInquiry(tBTM_INQ_RESULTS_CB* p_results_cb,
                             tBTM_CMPL_CB* p_cmpl_cb) {
  inc_func_call_count(__func__);
  return BTM_SUCCESS;
}
tBTM_STATUS btm_initiate_rem_name(const RawAddress& remote_bda, uint8_t origin,
                                  uint64_t timeout_ms, tBTM_CMPL_CB* p_cb) {
  inc_func_call_count(__func__);
  return BTM_SUCCESS;
}
tINQ_DB_ENT* btm_inq_db_find(const RawAddress& p_bda) {
  inc_func_call_count(__func__);
  return nullptr;
}
tINQ_DB_ENT* btm_inq_db_new(const RawAddress& p_bda) {
  inc_func_call_count(__func__);
  return nullptr;
}
uint16_t BTM_IsInquiryActive(void) {
  inc_func_call_count(__func__);
  return 0;
}
uint8_t BTM_GetEirSupportedServices(uint32_t* p_eir_uuid, uint8_t** p,
                                    uint8_t max_num_uuid16,
                                    uint8_t* p_num_uuid16) {
  inc_func_call_count(__func__);
  return 0;
}
uint8_t BTM_GetEirUuidList(const uint8_t* p_eir, size_t eir_len,
                           uint8_t uuid_size, uint8_t* p_num_uuid,
                           uint8_t* p_uuid_list, uint8_t max_num_uuid) {
  inc_func_call_count(__func__);
  return 0;
}
void BTM_AddEirService(uint32_t* p_eir_uuid, uint16_t uuid16) {
  inc_func_call_count(__func__);
}
void BTM_CancelInquiry(void) { inc_func_call_count(__func__); }
void BTM_EnableInterlacedInquiryScan() { inc_func_call_count(__func__); }
void BTM_EnableInterlacedPageScan() { inc_func_call_count(__func__); }
void btm_clr_inq_db(const RawAddress* p_bda) { inc_func_call_count(__func__); }
void btm_clr_inq_result_flt(void) { inc_func_call_count(__func__); }
void btm_inq_clear_ssp(void) { inc_func_call_count(__func__); }
void btm_inq_db_free(void) { inc_func_call_count(__func__); }
void btm_inq_db_init(void) { inc_func_call_count(__func__); }
void btm_inq_db_reset(void) { inc_func_call_count(__func__); }
void btm_inq_remote_name_timer_timeout(UNUSED_ATTR void* data) {
  inc_func_call_count(__func__);
}
void btm_inq_rmt_name_failed_cancelled(void) { inc_func_call_count(__func__); }
void btm_inq_stop_on_ssp(void) { inc_func_call_count(__func__); }
void btm_process_cancel_complete(tHCI_STATUS status, uint8_t mode) {
  inc_func_call_count(__func__);
}
void btm_process_inq_complete(tHCI_STATUS status, uint8_t mode) {
  inc_func_call_count(__func__);
}
void btm_process_inq_results(const uint8_t* p, uint8_t hci_evt_len,
                             uint8_t inq_res_mode) {
  inc_func_call_count(__func__);
}
void btm_process_remote_name(const RawAddress* bda, const BD_NAME bdn,
                             uint16_t evt_len, tHCI_STATUS hci_status) {
  inc_func_call_count(__func__);
}
void btm_set_eir_uuid(const uint8_t* p_eir, tBTM_INQ_RESULTS* p_results) {
  inc_func_call_count(__func__);
}
void btm_sort_inq_result(void) { inc_func_call_count(__func__); }
bool BTM_IsRemoteNameKnown(const RawAddress& bd_addr, tBT_TRANSPORT transport) {
  inc_func_call_count(__func__);
  return false;
}
void btm_clear_all_pending_le_entry(void) { inc_func_call_count(__func__); }

// Mocked functions complete
// END mockcify generation
