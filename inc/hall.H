/**********************************hall V2.0 ˵�� ************************************************************************
Hallģ�����ڻ�ȡ��STC-Bѧϰ�塱��hall������״̬��hallģ�鹲�ṩ1�����غ�����1��Ӧ�ú�����һ��Hall�¼���enumEventHall	
 ��1��HallInit()��hallģ���ʼ������
 ��2��unsigned char GetHallAct(void)����ȡhall�¼���
		��������ֵ��
			enumHallNull���ޱ仯��
			enumHallGetClose���ų��ӽ���
			enumHallGetAway���ų��뿪��	
        ��ѯһ�κ�,�¼�ֵ���enumEventHall	(����ѯһ����Ч)					
 ��3��hall�������¼���
      ��Hall��⵽��"�ų��ӽ�"��"�ų��뿪"�¼�ʱ��������һ��Hall�������¼�(enumEventHall).��Ӧ�¼����û������������û���д,	����sys���ṩ��SetEventCallBack()���������¼���Ӧ����.	

				 
��д����ɣ��绰18008400450��   2021��3��15�����  2021��3��26���޸�
*/

#ifndef _hall_H_
#define _hall_H_

extern void HallInit(void);                    //����hallģ��
extern unsigned char GetHallAct(void);         //��ȡhall�¼�				 	     
enum HallActName {enumHallNull,enumHallGetClose,enumHallGetAway};  //����ֵ��enumHallNull�����ޣ�enumHallGetClose�����½��أ��ų��ӽ�����enumHallGetAway���������أ��ų��뿪��	

#endif                                             