/*
 * Licensed to the OpenAirInterface (OAI) Software Alliance under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The OpenAirInterface Software Alliance licenses this file to You under
 * the OAI Public License, Version 1.1  (the "License"); you may not use this file
 * except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.openairinterface.org/?page_id=698
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *-------------------------------------------------------------------------------
 * For more information about the OpenAirInterface (OAI) Software Alliance:
 *      contact@openairinterface.org
 */

#ifndef NGAP_GNB_TRACE_H_
#define NGAP_GNB_TRACE_H_

// int ngap_gNB_generate_trace_failure(sctp_data_t        *sctp_data_p,
//                                     int32_t             stream,
//                                     uint32_t            gNB_ue_ngap_id,
//                                     uint32_t            amf_ue_ngap_id,
//                                     E_UTRAN_Trace_ID_t *trace_id,
//                                     Cause_t            *cause_p);

// int ngap_gNB_handle_trace_start(gNB_amf_desc_t *gNB_desc_p,
//                                 sctp_queue_item_t *packet_p,
//                                 struct ngap_message_s *message_p);
int ngap_gNB_handle_trace_start(uint32_t         assoc_id,
                                uint32_t         stream,
                                NGAP_NGAP_PDU_t *pdu);

// int ngap_gNB_handle_deactivate_trace(gNB_amf_desc_t *gNB_desc_p,
//                                      sctp_queue_item_t *packet_p,
//                                      struct ngap_message_s *message_p);
int ngap_gNB_handle_deactivate_trace(uint32_t         assoc_id,
                                     uint32_t         stream,
                                     NGAP_NGAP_PDU_t *pdu);

#endif /* NGAP_GNB_TRACE_H_ */