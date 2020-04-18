PL/SQL Developer Test script 3.0
22
-- Created on 2020/4/18 by 16688 
declare 
  -- Local variables here
  temp integer;
  ty varchar(64);
  randomTime date;
begin
  for i in 1..10000 loop
      temp:=dbms_random.value(1,4);
      if temp = 1 then
        ty:='student';
      elsif temp = 2 then
        ty:='boss';
      elsif temp = 3 then
        ty:='teacher';
      else
        ty:='worker';   
      end if; 
      randomTime:=to_date(2451911 + trunc(DBMS_RANDOM.VALUE(0, 365)), 'J');
      insert into tb_user (name,age,createtime,type)  values ('tome'||i,dbms_random.value(1,99),);  
  end loop;
end;
0
0
